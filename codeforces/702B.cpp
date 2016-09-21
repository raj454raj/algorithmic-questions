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
    vector<ll> a(32, 0);
    map< ll, ll > m;
    a[0] = 1;
    for(ll i = 1 ; i < 32 ; ++i) {
        a[i] = a[i - 1] << 1;
    }

    ll j, ans = 0;
    for(ll i = 0 ; i < n ; ++i) {
        cin >> x;
        j = 31;
        while(x < a[j]) {
            ans += m[a[j] - x];
            j--;
        }
        m[x]++;
    }

    cout << ans;
    return 0;
}

