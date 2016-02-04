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
    string s;
    cin >> s;
    int m;
    cin >> m;
    int l, r, k, strlength;
    string tmp;
    while(m--) {
        cin >> l >> r >> k;
        l--;
        r--;
        strlength = r - l + 1;
        k %= strlength;
        tmp.resize(strlength);
        for(int i = 0 ; i < strlength ; ++i) {
            tmp[(i + k) % strlength] = s[i + l];
        }
        for(int i = l ; i <= r ; ++i) {
            s[i] = tmp[i - l];
        }
    }
    cout << s;
    return 0;
}

