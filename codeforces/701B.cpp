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
    ull n, q;
    int a[100002] = {0}, b[100002] = {0};
    int x, y;
    ull r = 0, c = 0;
    cin >> n >> q;
    while(q--) {
        cin >> x >> y;
        a[x]++;
        b[y]++;
        if(a[x] == 1) r++;
        if(b[y] == 1) c++;
        cout << n * n + r * c - r * n - c * n << " ";
    }
    return 0;
}

