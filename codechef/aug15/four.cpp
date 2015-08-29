#include<bits/stdc++.h>
#define g getchar_unlocked
using namespace std;

int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10*n + c - '0', c = g();
    return n;
}
int arr[1000005];
long long int sum[1000005];
int main() {
    int t, n, h, x, y;
    long long int s;
    t = readnum();
    while(t--) {
        n = readnum();
        h = readnum();
        for(int i = 0 ; i <= n ; ++i) {
            arr[i] = 0;
            sum[i] = 0;
        }
        for(int i = 0 ; i < n ; i++) {
            x = readnum();
            y = readnum();
            arr[x] += 1;
            arr[y+1] -= 1;
        }
        for(int i = 1 ; i < n ; ++i) {
            arr[i] += arr[i - 1];
        }
        s = 0;
        for(int i = 0 ; i < n ; ++i) {
            s += arr[i];
            sum[i] = s;
        }
        s = sum[h - 1];
        for(int i = h ; i < n ; ++i) {
            if(s < sum[i] - sum[i - h]) {
                s = sum[i] - sum[i - h];
            }
        }
        printf("%lld\n", ((long long int)n*(long long int)h) - s);
    }
    return 0;
}
