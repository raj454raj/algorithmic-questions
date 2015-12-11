#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector< vector<int> > g;
vector<int> visited;
void dfs(int start) {
    if(visited[start])
        return;
    cout << start << " ";
    visited[start] = true;
    for(int i = 0 ; i < g[start].size() ; ++i) {
        if(!visited[g[start][i]])
            dfs(g[start][i]);
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    ll n, m, x, y;
    cin >> n >> m;
    visited.resize(n, false);
    g.resize(n);
    for(int i = 0 ; i < m ; ++i) {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(0);
    cout << endl;
    return 0;
}

