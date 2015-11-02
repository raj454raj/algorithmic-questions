#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}
int main() {
    ios_base::sync_with_stdio(0);
    int n, x, y;
    cin >> n;
    vector< pair<int, int> > v(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> x >> y;
        v[i] = make_pair(x, y);
    }
    sort(v.begin(), v.end(), comp);
    int prev = v[0].second;
    int flag = 0;
    for(int i = 1 ; i < n ; ++i) {
        if(v[i].second < prev) {
            flag = 1;
            break;
        }
        prev = v[i].second;
    }
    if(flag)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";
    return 0;
}
