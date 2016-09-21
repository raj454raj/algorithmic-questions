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

unordered_map< int, vector<int> > a;
unordered_map<int, int> visited;

void dfs(int start) {
    visited[start] = 1;
    cout << start << " ";
    for(int i = 0 ; i < a[start].size() ; ++i) {
        if(!visited[a[start][i]]) {
            dfs(a[start][i]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    int x, y;
    set<int> s;
    for(int i = 0 ; i < n ; ++i) {
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
        s.insert(x);
        s.insert(y);
    }

    int start;
    for(set<int>::iterator it = s.begin() ; it != s.end() ; ++it) {
        if(a[*it].size() == 1)
            start = *it;
    }

    dfs(start);
    return 0;
}

