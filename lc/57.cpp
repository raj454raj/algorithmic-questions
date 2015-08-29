#include<bits/stdc++.h>
using namespace std;
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}

};

bool compare(Interval a, Interval b) {
    return a.start < b.start;
}

vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
    if(intervals.empty()) {
        return intervals;
    }
    sort(intervals.begin(), intervals.end(), compare);
    vector<Interval>::iterator prev, it, i;
    for(it = intervals.begin() ; it != intervals.end() && it->start < newInterval.start; ++it)
        ;
    if(it == intervals.begin()) {
        intervals.insert(it, newInterval);
        it = intervals.begin();
        for(i = it + 1 ; i != intervals.end() ; ++i) {
            if((*it).end > (*i).end) {
                intervals.erase(i);
                --i;
            }
            else {
                break;
            }
        }
        if(i->start <= it->end && i->end > it->end) {
            (*it).end = (*i).end;
            intervals.erase(i);
        }
    }
    else if(it != intervals.end()) {
        intervals.insert(it, newInterval);
        if(it->start > (*(it - 1)).start && it->start <= (*(it - 1)).end) {
            it->start = (*(it - 1)).start;
            intervals.erase(it - 1);
            --it;
        }
        for(i = it + 1; i != intervals.end() ; ++i) {
            if(i->start >= it->start && i->end <= it->end) {
                intervals.erase(i);
                --i;
            }
            else
                break;
        }
        if(it->end >= i->start && it->end < i->end) {
            it->end = i->end;
            intervals.erase(i);
        }
    } 
    return intervals;
}

int main() {
    int n, x, y;
    cin >> n;
    vector<Interval> in;
    while(n--) {
        scanf("%d%d", &x, &y);
        Interval i(x, y);
        in.push_back(i);    
    }
    printf("Enter the interval to be inserted: \n");
    scanf("%d%d", &x, &y);
    Interval i(x, y);
    in = insert(in, i);
    vector<Interval>::iterator it;
    for(it = in.begin() ; it != in.end() ; ++it) {
        cout << "(" << it->start << ", " << it->end << ")\n";
    }
    return 0;
}
