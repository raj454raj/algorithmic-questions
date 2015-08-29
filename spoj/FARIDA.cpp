#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll max(ll a, ll b) {
    return a > b ? a : b;
}
int main() {
    ll t, n, a[10005];
    ll d[10005];
    scanf("%lld", &t);
    for(ll j = 1 ; j <= t ; ++j) {
        scanf("%lld", &n);
        if(n == 0) {
            cout << "Case " << j << ": 0\n";
            continue;
        }
        for(ll i = 0 ; i < n ; ++i) {
            scanf("%lld", &a[i]);
            d[i] = -1;
        }
        d[0] = a[0];
        d[1] = max(a[1], d[0]);
        for(int i = 2 ; i < n ; i++) {
            d[i] = max(d[i - 1], a[i] + d[i - 2]);
        }
        cout << "Case " << j << ": " << d[n - 1] << endl;
    }
    return 0;
}
