#include<bits/stdc++.h>
#define ll long long int
#define g getchar_unlocked
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}
int main() {
    int n, t;
    int x;
    t = readnum();
    int prev1, prev2;
    while(t--) {
        prev1 = prev2 = 0;
        n = readnum();
        int flag = 0;
        for(int i = 0 ; i < n ; ++i) {
            x = readnum();
            if(x > prev1) {
                prev2 = prev1;
                prev1 = x;
            }
            else if(x > prev2) {
                prev2 = x;
            }
            else {
                flag = 1;
            }
        }
        if(flag)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

