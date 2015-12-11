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
class NumMatrix {
    vector<vector<int> > dp;
    public:
    NumMatrix(vector<vector<int> > &matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0)
            return;
        dp.resize(matrix.size() + 1);
        for(int i = 0 ; i < matrix.size() + 1 ; ++i) {
            dp[i].resize(matrix[0].size() + 1);
        }
        for (int r = 0; r < matrix.size(); r++) {
            for (int c = 0; c < matrix[0].size(); c++) {
                dp[r + 1][c + 1] = dp[r + 1][c] + dp[r][c + 1] + matrix[r][c] - dp[r][c];
            }
        }
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
        return dp[row2 + 1][col2 + 1] - dp[row1][col2 + 1] - dp[row2 + 1][col1] + dp[row1][col1];
    }

};
int main() {
    ios_base::sync_with_stdio(0);
    vector<vector<int> > v;
    vector<int> tmp;
    tmp.push_back(3);
    tmp.push_back(0);
    tmp.push_back(1);
    tmp.push_back(4);
    tmp.push_back(2);
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back(5);
    tmp.push_back(6);
    tmp.push_back(3);
    tmp.push_back(2);
    tmp.push_back(1);
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back(1);
    tmp.push_back(2);
    tmp.push_back(0);
    tmp.push_back(1);
    tmp.push_back(5);
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back(4);
    tmp.push_back(1);
    tmp.push_back(0);
    tmp.push_back(1);
    tmp.push_back(7);
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back(1);
    tmp.push_back(0);
    tmp.push_back(3);
    tmp.push_back(0);
    tmp.push_back(5);
    v.push_back(tmp);
    tmp.clear();
    NumMatrix n(v);
    cout << n.sumRegion(1,1, 3,3);
    return 0;
}

