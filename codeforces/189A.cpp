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
    int n, a, b, c, z, tmp, m = 0;
    cin >> n >> a >> b >> c;
    for(int i = 0 ; i < 4001 ; ++i) {
        for(int j = 0 ; j < 4001 ; ++j) {
            if((a * i + b * j) > n)
                break;
           tmp = (n - (a * i + b * j));
           if(tmp % c == 0) {
                m = max(m, tmp / c + i + j);
           }
        }
    }
    cout << m;
    return 0;
}

