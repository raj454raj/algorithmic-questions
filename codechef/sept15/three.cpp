#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
#define N 1000000000

using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

int main() {
    int m, t;
    double p, tmp;
    t = readnum();
    while(t--) {
        m = readnum();
        scanf("%lf", &p);
        tmp = (double)(1 - pow(-p, m)) / (1 + p);
        printf("%0.5lf %0.5lf\n", (double)(tmp) * N, (double)(1 - tmp) * N);
    }
    return 0;
}

