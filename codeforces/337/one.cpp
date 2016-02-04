#include<bits/stdc++.h>
#define ll long long int
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
    ll n;
    cin >> n;
    if(!(n&1)) {
        n /= 2;
        if(n&1) {
            cout << n / 2;
        }
        else {
            cout << n / 2 - 1;
        }
    }
    else {
        cout << 0;
    }
    return 0;
}

