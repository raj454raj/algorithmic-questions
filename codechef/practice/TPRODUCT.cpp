#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
#define ull unsigned long long int
#define M 1000000007
using namespace std;
ull readnum() {
    ull n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

int main() {
    ull n, x, total;
    n = readnum();
    vector<ull> v(33000);
    vector<double> p(33000);
    double tmp;
    while(n) {
        total = (1 << n) - 1;
        for(int i = 0 ; i < total ; ++i) {
            x = readnum();
            v[i] = x;
            p[i] = (double)x;
        }
        total = (1 << (n - 1)) - 1;
        for(int i = total - 1 ; i >= 0 ; --i) {
            if(p[2 * i + 1] > p[2 * i + 2]) {
                p[i] *= p[2 * i + 1];
                v[i] = (v[i] * v[2 * i + 1]) % M;
            }
            else {
                p[i] *= p[2 * i + 2];
                v[i] = (v[i] * v[2 * i + 2]) % M;
            }
        }
        printf("%lld\n", v[0]);
        v.clear();
        p.clear();
        n = readnum();
    }
    return 0;
}

