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
    ll n, d;
    cin >> n >> d;
    vector<ll> v(n);
    for(int i = 0 ; i < n ; ++i)
        cin >> v[i];
    ll start = v[0], cnt = 0, tmp;
    for(int i = 1 ; i < n ; ++i) {
        if(v[i] > start) {
            start = v[i];
            continue;
        }
        else {
            tmp = (start + 1 - v[i]) / d;
            if(tmp * d != (start + 1 - v[i]))
                tmp++;
            cnt += tmp;
            start = v[i] + tmp * d;
        }
    }
    cout << cnt;

    return 0;
}

