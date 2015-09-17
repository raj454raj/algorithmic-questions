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

int minimumTotal(vector<vector<int> >& triangle) {
    vector<vector<int> > s = triangle;
    for(int i = 1 ; i < triangle.size() ; i++) {
        for(int j = 0 ; j < triangle[i].size() ; j++) {
            if(i > 0 && j < triangle[i - 1].size() && j > 0)
                s[i][j] = triangle[i][j] + min(s[i-1][j], s[i-1][j-1]);
            else if(i > 0 && j > 0)
                s[i][j] = triangle[i][j] + s[i-1][j-1];
            else if(j == 0)
                s[i][j] = triangle[i][j] + s[i - 1][j];
        }
    }
    int m = s[s.size() - 1][0];
    for(int i = 1 ; i < triangle[triangle.size() - 1].size() ; i++) {
        if(s[s.size() - 1][i] < m)
            m = s[s.size() - 1][i];
    }
    return m;
}

int main() {
    int t;
    //t = readnum();
    vector<vector<int> > v;
    vector<int> tmp;
    tmp.push_back(2);
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back(3);
    tmp.push_back(4);
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back(6);
    tmp.push_back(5);
    tmp.push_back(7);
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back(4);
    tmp.push_back(1);
    tmp.push_back(8);
    tmp.push_back(3);
    v.push_back(tmp);
    cout << minimumTotal(v);
    return 0;
}
