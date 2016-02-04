#include<bits/stdc++.h>
#define ll long long int
using namespace std;
// final test
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll l, r, tmp, cnt = 0;
    cin >> l >> r;
    for(ll i = 1 ; i <= 63 ; ++i) {
        for(ll j = 0 ; j < i - 1 ; ++j) {
            tmp = (1LL << i) - (1LL << j) - 1;
            if(tmp >= l && tmp <= r)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}

