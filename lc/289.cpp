#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int countneighbours(vector<vector<int> >& b, int i, int j, int m, int n) {
    int count = 0;
        if(j < n - 1 && b[i][j + 1])
            count++;
        if(j > 0 && b[i][j - 1])
            count++;
        if(i < m - 1 && b[i + 1][j])
            count++;
        if(i > 0 && b[i - 1][j])
            count++;
        if(i < m - 1 && j < n - 1 && b[i + 1][j + 1])
            count++;
        if(i > 0 && j > 0 && b[i - 1][j - 1])
            count++;
        if(i > 0 && j < n - 1 && b[i - 1][j + 1])
            count++;
        if(i < m - 1 && j > 0 && b[i + 1][j - 1])
            count++;
        return count;
}

void gameOfLife(vector<vector<int> >& board) {
    vector<vector<int> > c;
    int x;
    if(board.size() == 0)
        return;
    vector<int> tmp;
    for(int i = 0 ; i < board.size() ; ++i) {
        for(int j = 0 ; j < board[i].size() ; ++j) {
            x = countneighbours(board, i, j, board.size(), board[i].size());
            tmp.push_back(x);
        }
        c.push_back(tmp);
        tmp.clear();
    }
    for(int i = 0 ; i < board.size() ; ++i) {
        for(int j = 0 ; j < board[i].size() ; ++j) {
            if(board[i][j]) {
                if(c[i][j] < 2)
                    board[i][j] = 0;
                if(c[i][j] > 3)
                    board[i][j] = 0;
            }
            else {
                if(c[i][j] == 3)
                    board[i][j] = 1;
            }
        }
    }
}

int main() {
    int n, x;
    vector<vector<int> > v;
    vector<int> tmp;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; ++i) {
        for(int j = 0 ; j < n ; ++j) {
            cin >> x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
        tmp.clear();
    }
    gameOfLife(v);
    for(int i = 0 ; i < n ; ++i) {
        for(int j = 0 ; j < n ; ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

