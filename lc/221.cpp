#include<bits/stdc++.h>
using namespace std;
int min(int a, int b, int c) {
    int m = a;
    if(b < m)
        m = b;
    if(c < m)
        m = c;
    return m;
}
int maximalSquare(vector<vector<char> >& matrix) {
    int m = matrix.size();
    if(m == 0)
        return 0;
    int n = matrix[0].size();
    int max = 0;
    vector< vector<int> > s(m, vector<int>(n, 0));
    for(int i = 0 ; i < n ; ++i)
        s[0][i] = int(matrix[0][i] - '0');
    for(int i = 0 ; i < m ; ++i)
        s[i][0] = int(matrix[i][0] - '0');
    for(int i = 0 ; i < m ; ++i) {
        for(int j = 0 ; j < n ; ++j) {
            if(matrix[i][j] == '1') {
                if(i > 0 && j > 0) {
                    s[i][j] = min(s[i - 1][j - 1], s[i - 1][j], s[i][j - 1]) + 1;
                    if(s[i][j] > max)
                        max = s[i][j];
                }
                else {
                    if(max < 1)
                        max = 1;
                }
            }
        }
    }
    return max * max;
}

int main() {
    vector< vector<char> > v {{'0', '1', '1', '0', '1'},
                              {'1', '1', '0', '1', '0'},
                              {'1', '0', '1', '0', '0'},
                              {'1', '0', '1', '1', '0'},
                              {'1', '1', '0', '1', '1'},
                              {'0', '0', '0', '0', '0'}};
    cout << maximalSquare(v) << endl;
    return 0;
}
