#include<bits/stdc++.h>
//#define g getchar_unlocked
#define ll long long int
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
void setZeroes(vector<vector<int> >& matrix) {
    if(matrix.size() == 0)
        return;
    vector<int> rows(matrix.size(), 0);
    vector<int> cols(matrix[0].size(), 0);

    for(int i = 0 ; i < matrix.size() ; ++i) {
        for(int j = 0 ; j < matrix[i].size() ; ++j) {
            if(!matrix[i][j]) {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }
    for(int i = 0 ; i < matrix.size() ; ++i) {
        for(int j = 0 ; j < matrix[i].size() ; ++j) {
            if(rows[i] || cols[j])
                matrix[i][j] = 0;
        }
    }
}

int main() {
    vector<vector<int> > v;
    vector<int> tmp;
    tmp.push_back(1);
    tmp.push_back(1);
    tmp.push_back(0);
    tmp.push_back(1);
    tmp.push_back(1);
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back(1);
    tmp.push_back(1);
    tmp.push_back(1);
    tmp.push_back(1);
    tmp.push_back(1);
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back(1);
    tmp.push_back(0);
    tmp.push_back(1);
    tmp.push_back(1);
    tmp.push_back(1);
    v.push_back(tmp);
    tmp.clear();
    setZeroes(v);
    for(int i = 0 ; i < v.size() ; ++i) {
        for(int j = 0 ; j < v[i].size() ; ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

