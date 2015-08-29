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
    int x, i, n, t, prev, max, count;
    t = readnum();
    while(t--) {
        n = readnum();
        prev = -1;
        count = 0;
        max = 0;
        while(n--) {
            x = readnum();
            if(prev == -1) {
                prev = x;
                max = 0;
            }
            else if(prev == x) {
                count++;
                if(count > max)
                    max = count;
            }
            else {
                if(count > max)
                    max = count;
                count = 0;
                prev = x;
            }
        }
        printf("%d\n", max);

    }
    return 0;
}
