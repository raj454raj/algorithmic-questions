#include<bits/stdc++.h>
#define ll long long int
#define g getchar_unlocked
using namespace std;
ll readnum() {
    ll n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

int main() {
    ll t, n1, n2, m, mi, ans, tmp;
    t = readnum();
    while(t--) {
        n1 = readnum();
        n2 = readnum();
        m = readnum();
        m = max(n1 - n2, n1 + n2 - (m * (m + 1)));
        m = max(m, n2 - n1);
        printf("%lld\n", m);
    }
    return 0;
}

