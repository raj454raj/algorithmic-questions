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
    ll t, tmp;
    cin >> t;
    if(t & 1) {
        t = t / 2 + 1;
        if(t == 1)
            tmp = 1;
        else
            tmp = t * (t + 1) - 1;
    }
    else {
        t = t / 2 + 1;
        tmp = t * (t + 1) - 1 - t;
    }
    cout << tmp;
    return 0;
}

