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
    ll k, a, b;
    cin >> k >> a >> b;
    ll cnt = 0;
    ll first = a % k;
    if(first < 0)
        first += k;
    ll second = b % k;
    if(second < 0)
        second += k;
    if(a % k) {
        a = a + (k - first);
    }
    if(b % k != 0)
        b = b - second;
    cout << ((b - a) / k) + 1;
    return 0;
}

