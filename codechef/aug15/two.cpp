#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, tmp, n, flag;
    scanf("%d", &t);
    string s1, s2;
    while(t--) {
        flag = 0;
        cin >> s1;
        cin >> s2;
        n = s1.size();
        int dp[2][200003];
        for(int i = 0 ; i < 2 ; ++i) {
            for(int j = 0 ; j < n ; ++j)
                dp[i][j] = INT_MAX;
        }
        if(s1[0] == '.')
            dp[0][0] = 0;
        if(s2[0] == '.')
            dp[1][0] = 0;
        for(int i = 1 ; i < n ; ++i) {
            if(s1[i] == '#' && s2[i] == '#') {
                flag = 1;
                break;
            }
            if(s1[i] == '.') {
                tmp = dp[1][i-1];
                if(dp[1][i-1] == INT_MAX)
                    tmp = INT_MAX - 1;
                dp[0][i] = min(dp[0][i - 1], tmp + 1);
            }
            if(s2[i] == '.') {
                tmp = dp[0][i-1];
                if(dp[0][i-1] == INT_MAX)
                    tmp = INT_MAX - 1;
                dp[1][i] = min(dp[1][i - 1], tmp + 1);
            }
        }
        tmp = min(dp[0][n-1], dp[1][n-1]);
        if(tmp == INT_MAX)
            flag = 1;
        if(flag)
            cout << "No\n";
        else {
            cout << "Yes\n";
            cout << min(dp[0][n-1], dp[1][n-1]) << endl;
        }
    }

    return 0;
}
