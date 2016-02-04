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
    ll n, m, x;
    cin >> n >> m;
    vector<ll> cnt(m + 1, 0);
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        cnt[x]++;
    }
    ll sum = 0, left = n;
    for(int i = 1 ; i <= m ; ++i) {
        left -= cnt[i];
        sum += cnt[i] * left;
    }
    cout << sum;
    return 0;
}
