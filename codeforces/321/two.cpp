#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool comp(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}
int main() {

    ios_base::sync_with_stdio(0);
    ll n, d, x, y, index;
    cin >> n >> d;
    vector< pair<ll, ll> > v(n);
    for(ll i = 0 ; i < n  ; i++) {
        cin >> x >> y;
        v[i] = make_pair(x, y);
    }
    sort(v.begin(), v.end(), comp);
    vector<ll> a(n), b(n);
    vector<ll> pref(n);
    ll s = 0;
    for(int i = 0 ; i < n ; ++i) {
        a[i] = v[i].first;
        b[i] = v[i].second;
        s += b[i];
        pref[i] = s;
    }
    ll tmp;
    pair<ll, ll> start;
    ll sum = 0;
    if(n == 1) {
        cout << v[0].second;
        return 0;
    }
    int ind;
    for(ll i = 0 ; i < n ; i++) {
        tmp = b[i];
        start = v[i];
        cout << *(upper_bound(a.begin() + 1, a.end(), a[i] + d ) - 1) <<endl;
        /*    if(pref[i] - pref[ind] + b[i] > sum)
                sum = pref[i] - pref[ind] + b[i];*/
    }
    cout << sum;
    return 0;
}

