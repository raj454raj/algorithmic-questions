#include<bits/stdc++.h>
#define ll long long int
//#define g getchar_unlocked
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, x;
    cin >> n;
    ll m = LONG_MAX;
    ll cnt = 0;
    vector<ll> pos, v(n);
    for(ll i = 0 ; i < n ; ++i) {
        cin >> v[i];
        if(v[i] < m)
            m = v[i];
    }
    for(ll i = 0 ; i < n ; ++i) {
        if(v[i] == m)
            pos.push_back()
    }
    return 0;
}

