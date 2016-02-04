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
    int arr[51][51];
    for(int i = 0 ; i < n ; ++i) {
        for(int j = 0 ; j < n ; ++j) {
            cin >> arr[i][j];
        }
    }
    int m, flag = 0;
    vector<int> v(n, -1);
    for(int i = 0 ; i < n ; ++i) {
        m = 0;
        for(int j = 0 ; j < n ; ++j) {
            m = max(m, arr[i][j]);
        }
        v[i] = m;
    }
    for(int i = 0 ; i < n ; ++i) {
        if(flag == 0 && v[i] == n - 1) {
            cout << v[i] + 1 << " ";
            flag = 1;
        }
        else
            cout << v[i] << " ";
    }
    return 0;
}

