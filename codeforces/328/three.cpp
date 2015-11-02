#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
//#define g getchar_unlocked
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
ull gcd(ull a, ull b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(0);
    ull t, w, b;
    cin >> t >> w >> b;
    ull g = gcd(w, b);
    ull tmp = min(w, b);
    ull l = (w * b) / gcd(w, b);
    ull all = t / l;
    ull num = 0;
    num += (tmp * all) + min(tmp - 1, t - l * all);
    ll tmpg = gcd(num, t);
    cout << num / tmpg << "/" << t / tmpg;
    return 0;
}
