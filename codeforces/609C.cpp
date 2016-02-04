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
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for(ll i = 0 ; i < n ; ++i) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    ll rem = sum % n;
    ll req = sum / n;
    ll res = 0;
    for(int i = 0 ; i < n ; ++i) {
        if(i >= n - rem)
            res += abs(v[i] - req - 1);
        else
            res += abs(req - v[i]);
    }
    cout << res / 2;
    return 0;
}

