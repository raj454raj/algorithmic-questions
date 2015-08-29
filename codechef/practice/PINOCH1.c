#include<stdio.h>
#define g getchar_unlocked
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10*n + c - '0', c=g();
    return n;
}
int main() {
    int t, n, x, prev, count;
//    scanf("%d", &t);
    t = readnum();
    while(t--) {
//        scanf("%d", &n);
        n = readnum();
        prev = -1;
        count = 0;
        while(n--) {
//            scanf("%d", &x);
            x = readnum();
            if(prev == -1)
                prev = x;
            if(x != prev) {
                count++;
                prev = x;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
