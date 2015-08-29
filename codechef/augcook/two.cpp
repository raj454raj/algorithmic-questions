#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
ll readnum() {
    ll n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

bool ispowerof2(int n) {
    return !(n&(n-1));
}
int main() {
    ll t, m, n;
    t = readnum();
    while(t--) {
        n = readnum();
        if(n == 1) {
            printf("2\n");
        }
        else if(ispowerof2(n + 1)) {
            printf("%lld\n", n / 2);            
        }
        else {
            printf("-1\n");
        }
    }
    return 0;
}

