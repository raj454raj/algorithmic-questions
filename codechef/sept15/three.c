#include<stdio.h>
#include<math.h>
#define g getchar_unlocked
#define N 1000000000

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
        tmp = (1.0 * (1 - pow(-p, m)) * N) / (1 + p);
        printf("%0.3lf %0.3lf\n", tmp, N - tmp);
    }
    return 0;
}

