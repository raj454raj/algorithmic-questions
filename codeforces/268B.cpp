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
    int n;
    scanf("%d", &n);
    long long int tmp = n;
    for(int i = 1 ; i < n ; ++i) {
        tmp += i * (n - i);
    }
    cout << tmp;
    return 0;
}

