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
    ull l, r, k;
    cin >> l >> r >> k;
    ull tmp;
    int flag = 0;
    ull start = 0;
    start = 1;
    while(start <= r) {
        if(start >= l) {
            flag = 1;
            cout << start << " ";
        }
        if(start <= (1e18) / k)
            start *= k;
        else
            break;
    }
    if(flag == 0) {
        cout << -1;
    }
    return 0;
}
