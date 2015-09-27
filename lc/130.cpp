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

void solve(vector< vector<char> >& board) {
    bool w, e;
    int n, s, t;
    vector< pair<int, int> > m;
    for(vector < vector<char> >::iterator i = board.begin() ; i != board.end() ; ++i) {
        for(vector<char>::iterator j = i->begin() ; j != i->end() ; ++j) {
            if(*j == 'O') {
                e = binary_search(j, i->end(), 'X');
                reverse_iterator<char> rfrom(j);
                reverse_iterator<char> rend(i->begin());

                w = binary_search(rfrom, rend, 'X');
                s = 0; n = 0;
                for(int k = i - board.begin() - 1 ; k >= 0 ; k--) {
                    if(board[k][j - i->begin()] == 'X') {
                        n = 1;
                        break;
                    }
                }
                for(int k = i - board.begin() + 1 ; k < board.size() ; ++k) {
                    if(board[k][j - i->begin()] == 'X') {
                        s = 1;
                        break;
                    }
                }
                if(e && w && n && s) {
                    m.push_back(make_pair(i - board.begin(), j - i->begin()));
                }
            }
        }
    }
    for(int i = 0 ; i < m.size() ; ++i) {
        board[m[i].first][m[i].second] = 'X';
    }
}

int main() {
    int n, m;
    char c;
    vector<char> tmp;
    vector< vector<char> > v;
    scanf("%d%d", &n, &m);
    getchar();
    for(int i = 0 ; i < n ; ++i) {
        for(int j = 0 ; j < m ; ++j) {
            scanf("%c", &c);
            getchar();
            tmp.push_back(c);
        }
        v.push_back(tmp);
        tmp.clear();
    }
    solve(v);
    for(int i = 0 ; i < n ; ++i) {
        for(int j = 0 ; j < m ; ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

