#include<bits/stdc++.h>
using namespace std;
bool comp(const pair<unsigned long long int, unsigned long long int> &a, const pair<unsigned long long int, unsigned long long int> &b) {
    return a.first < b.first;
}

vector< pair<unsigned long long int, unsigned long long int> >::iterator mylower(vector< pair<unsigned long long int, unsigned long long int> >& v, int x) {
    vector< pair<unsigned long long int, unsigned long long int> >::iterator it = lower_bound(v.begin(), v.end(), x, comp);
    if(it->first == x)
        return it;
    else if(it != v.begin()) {
        return (it - 1);
    }
    return v.begin();
}

int d(vector< pair<unsigned long long int, unsigned long long int> >& v, int n) {
    if(n <= 0)
        return 0;
    if(n <= 9)
        return 1;
    vector< pair<unsigned long long int, unsigned long long int> >::iterator it = mylower(v, n);
    cout << it->first << " " << it->second << endl;
    return 0;
}

int countDigitOne(int n) {
    if(n <= 0)
        return 0;
    if(n <= 9)
        return 1;
    vector< pair<unsigned long long int, unsigned long long int> > v;
    unsigned long long int sum = 10;

    v.push_back(make_pair(0, 0));
    v.push_back(make_pair(10, 1));
    int i = 0;
    unsigned long long int final_count = 0;
    while(1) {
        if(10 * sum > n)
            break;
        v.push_back(make_pair(10 * sum, sum + 8 * v[i].second));
        ++i;
        sum *= 10;
    }

    for(int i = 0 ; i < v.size() ; ++i) {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return d(v, (unsigned long long int)n);
}

int main() {
    int n;
    cin >> n;
    cout << countDigitOne(n);
    return 0;
}
