#include<bits/stdc++.h>
#define ull unsigned long long int
//#define g getchar_unlocked
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ull n;
    cin >> n;
    ull tmp = n * n;
    if(n <= 2)
        cout << -1;
    else if(n&1) {
        tmp % 2 ? tmp = tmp / 2 - 1 : tmp /= 2;
    }
    else {
        tmp % 4 ? tmp = tmp / 4 - 1 : tmp /= 4;
    }
    cout << tmp << " " << tmp + 1;
    return 0;
}

