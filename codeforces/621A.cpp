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
    ll n, x, sum = 0, m = LONG_MAX;
    cin >> n;
    for(ll i = 0 ; i < n ; ++i) {
        cin >> x;
        sum += x;
        if(x&1) {
            m = min(m, x);
        }
    }
    if(sum&1)
        cout << sum - m;
    else
        cout << sum;
    return 0;
}

