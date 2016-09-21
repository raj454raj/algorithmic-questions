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
    string s;
    cin >> n;
    cin >> s;
    vector<int> v(200002);
    for(int i = 0; i < n ; i++) {
        cin >> v[i];
    }
    int m = INT_MAX;
    for(int i = 0 ; i < n - 1 ; i++) {
        if(s[i] == 'R' && s[i + 1] == 'L')
            m = min(m, v[i + 1] - v[i]);
    }
    if(m == INT_MAX)
        cout << -1;
    else
        cout << m / 2;
    return 0;
}

