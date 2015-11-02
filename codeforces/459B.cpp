#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll n, x;
    cin >> n;
    vector<ll> v(n);
    ll mi = LONG_MAX, ma = 0;
    ll flag = 0;
    for(ll i = 0 ; i < n ; ++i) {
        cin >> x;
        v[i] = x;
        if(!i)
            flag = x;
        if(flag != x) {
            flag = -1;
        }
        mi = min(mi, x);
        ma = max(ma, x);
    }
    ll a = 0, b = 0;
    for(ll i = 0 ; i < n ; ++i) {
        if(v[i] == mi)
            a++;
        if(v[i] == ma)
            b++;
    }
    if(flag >= 0)
        cout << ma - mi << " " << n * (n - 1) / 2;
    else
        cout << ma - mi << " " << a * b;
    return 0;
}

