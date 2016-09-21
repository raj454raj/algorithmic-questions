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

bool comp(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, x;
    cin >> n;
    vector<ll> v;
    for(ll i = 0 ; i < n ; ++i) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v[(n - 1) / 2];
    return 0;
}

