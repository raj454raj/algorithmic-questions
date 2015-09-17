#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

bool searchMatrix(vector< vector<int> >& matrix, int target) {
    if(matrix.size() == 0)
        return false;
    int i = 0, j = matrix[0].size() - 1;
    while(i < matrix.size() && j >= 0) {
        if(matrix[i][j] == target)
            return true;
        else if(matrix[i][j] < target)
            i++;
        else
            j--;
    }
    return false;
}

int main() {
    int m, n, x;
    cin >> m >> n;
    vector<int> tmp;
    vector< vector<int> > v;
    for(int i = 0 ; i < m ; ++i) {
        tmp.clear();
        for(int j = 0 ; j < n ; ++j) {
            cin >> x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    }
    cin >> x;
    cout << searchMatrix(v, x);
    return 0;
}

