#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool comp(pair<ll, ll> a, pair<ll, ll> b) {
    return a.first < b.first;
}

ll n, d, x, y;
vector<ll> a, b, sum;
vector< pair<ll, ll> > v;
ll s = 0;
int main() {
    scanf("%I64d%I64d", &n, &d);
    a.resize(n);
    b.resize(n);
    sum.resize(n);
    v.resize(n);
    for(ll i = 0 ; i < n ; i++) {
        scanf("%I64d%I64d", &x, &y);
        v[i] = make_pair(x, y);
    }

    sort(v.begin(), v.end(), comp);
    for(ll i = 0 ; i < n ; i++) {
        s += v[i].second;
        a[i] = v[i].first;
        b[i] = v[i].second;
        sum[i] = s;
    }

    ll ind, max = 0;
    for(ll i = 0 ; i < n ; i++) {
        ind = (upper_bound(a.begin() + i, a.end(), a[i] + d - 1) - 1) - a.begin();
        if(sum[ind] - sum[i] + b[i] > max)
            max = sum[ind] - sum[i] + b[i];
    }
    printf("%I64d\n", max);

    return 0;
}

