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
    int n, m;
    cin >> n >> m;
    char c;
    int a[103][103] = {0};
    int flag = 0;
    for(int i = 0 ; i < n ; ++i) {
        for(int j = 0 ; j < m ; ++j) {
            cin >> c;
            if(c != 'B' && c != 'W' && c != 'G')
                flag = 1;
        }
    }
    if(flag)
        cout << "#Color";
    else
        cout << "#Black&White";
    return 0;
}

