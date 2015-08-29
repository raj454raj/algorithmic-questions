#include<bits/stdc++.h>
#define g getchar_unlocked
using namespace std;
int hasfiveintheend(long long int x) {
    long long int tmp = x;
    while(tmp%10 == 0) {
        tmp = tmp / 10;
    }
    if(tmp%10 == 5)
        return 1;
    return 0;
}
long long int readnum() {
    long long int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10*n + c - '0', c = g();
    return n;
}
int main() {
    long long int n, x, tmp;
    n = readnum();
    while(n--) {
        x = readnum();
        while(hasfiveintheend(x)) {
            x = x * 4;
        }
        printf("%lld\n", x);
    }
    return 0;
}
