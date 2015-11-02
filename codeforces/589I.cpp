#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}
int main() {
    ios_base::sync_with_stdio(0);
    int n, k, x;
    cin >> n >> k;
    vector< pair <int, int> > v(101);
    for(int i = 0 ; i < 101 ; ++i) {
        v[i] = make_pair(i + 1, 0);
    }
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        v[x - 1].second++;
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0 ; i < 101 ; ++i) {
        if(v[i].second)
            cout << v[i].first << " " << v[i].second << endl;
    }
    int req = n / k;
    int i = 0, j = k - 1;
    int count = 0, tmpreq;
    while(1) {
        if(i >= j)
            break;
        if(v[i].second == req && v[j].second == req)
            break;
        else {
            while(i < k && v[i].second == req)
                i++;
            while(j >= 0 && v[j].second == req)
                j--;
            if(i == k || j == 0)
                break;
            tmpreq = req - v[i].second;
            if(v[j].second - tmpreq >= req)
                v[j].second -= tmpreq;
            count += tmpreq;
            v[i].second = req;
            i++;
            if(v[j].second == req)
                j--;
        }
    }
    cout << count;
    return 0;
}

