#include<bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char> >& board) {
    for(int i = 0 ; i < 9 ; i++) {
        int arr[10] = {0};
        for(int j = 0 ; j < 9 ; ++j) {
            if(board[i][j] == '.')
                continue;
            arr[board[i][j] - '0']++; 
            if(arr[board[i][j] - '0'] == 2)
                return false;
        }
    }
    for(int i = 0 ; i < 9 ; i++) {
        int arr[10] = {0};
        for(int j = 0 ; j < 9 ; ++j) {
            if(board[j][i] == '.')
                continue;
            arr[board[j][i] - '0']++; 
            if(arr[board[j][i] - '0'] == 2)
                return false;
        }
    }
    for(int i = 0 ; i < 3 ; ++i) {
        for(int j = 0 ; j < 3 ; ++j) {
            int arr[10] = {0};
            for(int p = 3 * i ; p < 3 * i + 3; ++p) {
                for(int q = 3 * j ; q < 3 * j + 3 ; ++q) {
                    if(board[p][q] == '.')
                        continue;
                    arr[board[p][q] - '0']++; 
                    if(arr[board[p][q] - '0'] == 2)
                        return false;
                }
            }
        }
    }
    return true;
}

int main() {
    char arr[9][9] = {'5', '3', '.', '.', '7', '.', '.', '.', '.',
                      '6', '.', '.', '1', '9', '5', '.', '.', '.',
                      '.', '9', '8', '.', '.', '.', '.', '6', '.',
                      '8', '.', '.', '.', '6', '.', '.', '.', '3',
                      '4', '.', '.', '8', '.', '3', '.', '.', '1',
                      '7', '.', '.', '.', '2', '.', '.', '.', '6',
                      '.', '6', '.', '.', '5', '.', '2', '8', '.',
                      '.', '.', '.', '4', '1', '9', '.', '.', '5',
                      '3', '.', '.', '.', '8', '.', '.', '7', '9'
                      };
    vector< vector<char> > v(9);
    for(int i = 0 ; i < 9 ; ++i) {
        v[i] = vector<char> (arr[i], arr[i] + 9);
    }
    cout << isValidSudoku(v);
    /*
    for(int i = 0 ; i < 9 ; ++i) {
        for(int j = 0 ; j < 9 ; ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }*/
    return 0;
}
