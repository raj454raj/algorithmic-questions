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
    int n;
    cin >> n;
    int a[100005];
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i];
    }
    if(n == 1) {
        cout << 1;
        return 0;
    }

    int prev = a[0];
    int cnt = 1, m = 1;
    for(int i = 1 ; i < n ; ++i) {
        if(a[i] > prev) {
            cnt++;
            m = max(m, cnt);
        }
        else {
            cnt = 1;
        }
        prev = a[i];
    }
    cout << m;
    return 0;
}

