#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> v[i];
    }
    int tmpcount;
    vector< vector<int> > matrix(n);
    for(int i = 0 ; i < n ; ++i) {
        matrix[i].resize(m);
        for(int j = 0 ; j < m ; ++j) {
            if(v[i][j] == '.') {
                matrix[i][j] = 0;
                cout << matrix[i][j] << " ";
                continue;
            }
            tmpcount = 0;
            if(i > 0 && v[i - 1][j] == '.')
                tmpcount++;
            if(j > 0 && v[i][j - 1] == '.')
                tmpcount++;
            if(i < n - 1)
                tmpcount++;
            if(j < m - 1)
                tmpcount++;
            matrix[i][j] = tmpcount;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    vector< vector<int> > dp;
    dp.resize(matrix.size() + 1);
    for(int i = 0 ; i < matrix.size() + 1 ; ++i) {
        dp[i].resize(matrix[0].size() + 1);
    }
    cout << "**********************\n";
    for (int r = 0; r < matrix.size(); r++) {
        for (int c = 0; c < matrix[0].size(); c++) {
            dp[r + 1][c + 1] = dp[r + 1][c] + dp[r][c + 1] + matrix[r][c] - dp[r][c];
            cout << dp[r + 1][c + 1] << " ";
        }
        cout << endl;
    }
    int q;
    cin >> q;
    int i, j;
    int r1, r2, c1, c2, r, c;
    int total = 0, blocked = 0;
    while(q--) {
        cin >> r1 >> c1 >> r2 >> c2;
        r = r2 - r1;
        c = c2 - c1;
        total = (r + 1) * c + r * (c + 1);
        r1--;r2--;c1--;c2--;
        for(j = c1 ; j <= c2 ; ++j) {
            i = r1;
            if(v[i][j] == '.') {
                continue;
            }
            tmpcount = 0;
            if(j > c1 && v[i][j - 1] == '.')
                tmpcount++;
            if(i < r2 - 1)
                tmpcount++;
            if(j < m - 1)
                tmpcount++;
        }
        blocked = dp[r2 + 1][c2 + 1] - dp[r1][c2 + 1] - dp[r2 + 1][c1] + dp[r1][c1];
        cout << total - blocked << endl;
    }

    return 0;
}

