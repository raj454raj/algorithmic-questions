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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    for(int i = 0 ; i < m ; ++i) {
        cin >> a[i];
    }
    ll start = 1;
    ll cnt = 0;
    for(int i = 0 ; i < m ; ++i) {
        if(a[i] > start) {
            cnt += a[i] - start;
        }
        else if(a[i] < start){
            cnt += n - (start - a[i]);
        }
        start = a[i];
    }
    cout << cnt;
    return 0;
}

