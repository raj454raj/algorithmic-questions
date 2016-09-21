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
    ll n, b, d, x, sum = 0, cnt = 0;
    cin >> n >> b >> d;
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        if(x <= b) {
            sum += x;
            if(sum > d) {
                sum = 0;
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}

