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
    int n, x, y;
    cin >> x >> y >> n;
    int p, q, v;
    double d, m = INT_MAX;
    for(int i = 0 ; i < n ; ++i) {
        cin >> p >> q >> v;
        d = sqrt((p - x) * (p - x) + (q - y) * (q - y));
        if(d / (double)v <  m)
            m = d / (double)v;
    }
    cout << fixed << setprecision(12) << m;
    return 0;
}

