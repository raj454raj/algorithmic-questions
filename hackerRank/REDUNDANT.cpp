#include<bits/stdc++.h>
using namespace std;
struct temp {
    int val;
    int index;
    string s;
};

bool compare(temp a, temp b) {
    if(a.val == b.val)
        return a.index < b.index;
    return a.val < b.val;
}

bool comp(temp a, temp b) {
    return a.index < b.index;
}

int main() {
    int n, x;
    vector<temp> v;
    temp t;
    scanf("%d", &n);
    int i = 0;
    int N = n;
    while(n--) {
        scanf("%d", &x);
        t.val = x;
        t.index = i;
        t.s = "";
        v.push_back(t);
        i++;
    }
    sort(v.begin(), v.end(), compare);
    int prev = v[0].val;
    v[0].s = "ADDED";
    for(i = 1 ; i < N ; i++) {
        if(v[i].val == prev) 
            v[i].s = "REDUNDANT";
        else {
            v[i].s = "ADDED";
            prev = v[i].val;
        }
    }
    sort(v.begin(), v.end(), comp);
    for(i = 0 ; i < N ; i++) {
        cout << v[i].s << endl;
    }
    return 0;
}
