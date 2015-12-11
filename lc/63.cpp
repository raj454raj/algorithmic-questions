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
int uniquePathsWithObstacles(vector<vector<int> >& obstacleGrid) {
    /*for(int i = 0 ; i < obstacleGrid.size() ; ++i) {
        for(int j = 0 ; j < obstacleGrid[0].size() ; ++i) {
            if(obstacleGrid[i][j] == 1)
                obstacleGrid[i][j] = -1;
        }
    }*/
    if(obstacleGrid.size() == 0 || obstacleGrid[0][0] == 1)
        return 0;
    vector< vector<int> > sum;
    sum.resize(obstacleGrid.size());
    for(int i = 0 ; i < obstacleGrid.size() ; ++i) {
        sum[i].resize(obstacleGrid[i].size());
    }
    for(int i = 0 ; i < obstacleGrid.size() ; ++i) {
        if(obstacleGrid[i][0] == 1)
            sum[i][0] = -1;
        else
            sum[i][0] = 1;
    }
    for(int i = 0 ; i < obstacleGrid[0].size() ; ++i) {
        if(obstacleGrid[0][i] == 1)
            sum[0][i] = -1;
        else
            sum[0][i] = 1;

    }
    sum[0][0] = 0;
    for(int i = 1 ; i < obstacleGrid.size() ; ++i) {
        for(int j = 1 ; j < obstacleGrid[0].size() ; ++j) {
            if(!obstacleGrid[i - 1][j])
                sum[i][j] += sum[i - 1][j];
            if(!obstacleGrid[i][j - 1])
                sum[i][j] += sum[i][j - 1];
        }
    }
    for(int i = 0 ; i < obstacleGrid.size() ; ++i) {
        for(int j = 0 ; j < obstacleGrid[0].size() ; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return sum[sum.size() - 1][sum[0].size() - 1];
}
int main() {
    ios_base::sync_with_stdio(0);
    ll n;
    vector< vector<int> > v{{0,0,1,0,0},
                            {0,0,1,0,0},
                            {1,0,0,0,0},
                            {0,0,1,0,0}};
    cout << uniquePathsWithObstacles(v);
    return 0;
}

