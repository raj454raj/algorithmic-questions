#include<bits/stdc++.h>
#define g getchar_unlocked
using namespace std;

int readnum() {
    char c = g();
    int n = 0;
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10*n + c - '0', c = g();
    return n;
}

bool isnotpowerof2(int n) {
    return n&(n - 1);
}

int main() {
    int t, a, b, count;
    t = readnum();
    while(t--) {
        a = readnum();
        b = readnum();
        count = 0;
        while(isnotpowerof2(a)) {
            count++;
            a /= 2;
        }
        double tmp = b * 1.0 / a;
        printf("%d\n", count + int(abs(log2(tmp))));
    }
    return 0;
}
