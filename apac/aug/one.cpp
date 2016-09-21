#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll t, l, r, res, tmp, x;
    cin >> t;
    for(ll k = 1  ; k <= t ; ++k) {
        cin >> l >> r;
        tmp = min(l, r);
        x = tmp * (tmp - 1) / 2;
        res = tmp + x;
        cout << "Case #" << k << ": " << res << endl;
    }
    return 0;
}

