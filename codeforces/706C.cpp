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
string s[100002], r[100002];
ll dp[100002][2];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    int c[100002];
    ll M = 1e18;
    for(int i = 0 ; i < n ; ++i) {
        dp[i][0] = dp[i][1] = M;
        cin >> c[i];
    }

    dp[0][0] = 0;
    dp[0][1] = c[0];
    for(int i = 0 ; i < n ; ++i) {
        cin >> s[i];
        r[i].assign(s[i].rbegin(), s[i].rend());
    }

    for(int i = 1 ; i < n ; ++i) {
        if(s[i] >= s[i - 1])
            dp[i][0] = min(dp[i - 1][0], dp[i][0]);
        if(s[i] >= r[i - 1])
            dp[i][0] = min(dp[i - 1][1], dp[i][0]);
        if(r[i] >= s[i - 1])
            dp[i][1] = min(dp[i - 1][0] + c[i], dp[i][1]);
        if(r[i] >= r[i - 1])
            dp[i][1] = min(dp[i - 1][1] + c[i], dp[i][1]);
    }

    if(dp[n - 1][0] == M && dp[n - 1][1] == M)
        cout << "-1";
    else
        cout << min(dp[n - 1][0], dp[n - 1][1]);
    return 0;
}

