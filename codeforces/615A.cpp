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
    int n, m, q, x;
    cin >> n >> m;
    int a[101] = {0};
    for(int i = 0 ; i < n ; ++i) {
        cin >> q;
        for(int j = 0 ; j < q ; ++j) {
            cin >> x;
            a[x] = 1;
        }
    }
    int flag = 0;
    for(int i = 1 ; i < m + 1 ; ++i) {
        if(a[i] == 0) {
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}

