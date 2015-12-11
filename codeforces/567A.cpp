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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0 ; i < n ; ++i) {
        cin >> v[i];
    }
    cout << v[1] - v[0] << " " << v[n - 1] - v[0] << endl;
    for(ll i = 1 ; i < n - 1 ; ++i) {
        cout << min(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
        cout << " ";
        cout << max(abs(v[i] - v[0]), abs(v[i] - v[n - 1])) << endl;
    }
    cout << v[n - 1] - v[n - 2] << " " << v[n - 1] - v[0];
    return 0;
}

