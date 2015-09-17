#include<bits/stdc++.h>
//#define g getchar_unlocked
#define ll long long int
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
int main() {
    int x, n;
    //t = readnum();
    scanf("%d", &n);
    int flag=0;
    while(n--) {
        scanf("%d", &x);
        if(x == 1)
            flag = 1;
    }
    if(flag)
        printf("-1");
    else
        printf("1");
    return 0;
}

