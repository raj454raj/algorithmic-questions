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
    ll t, n;
    cin >> n;
    double d;
    ll x, y;
    cin >> x >> y;
    cout << 1.0 * (n * x) / (x + y);
    return 0;
}

