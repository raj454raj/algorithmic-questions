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
    ll n, x;
    cin >> n;
    int prev = 0;
    int cnt = 0, m = 0;
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        if(x >= prev)
            cnt++;
        else {
            m = max(m, cnt);
            cnt = 1;
        }
        prev = x;
    }
    m = max(m, cnt);
    cout << m;
    return 0;
}

