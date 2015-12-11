#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector< vector<int> > g;
void bfs() {
    int start = 0, curr;
    vector<bool> visited(g.size(), false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()) {
        curr = q.front();
        q.pop();
        cout << curr << " ";
        for(int i = 0 ; i < g[curr].size() ; ++i) {
            if(!visited[g[curr][i]]) {
                q.push(g[curr][i]);
                visited[g[curr][i]] = true;
            }
        }
    }
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    ll n, m, x, y;
    cin >> n >> m;
    g.resize(n);
    for(int i = 0 ; i < m ; ++i) {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs();
    return 0;
}

