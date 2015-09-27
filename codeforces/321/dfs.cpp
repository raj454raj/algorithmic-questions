#include<bits/stdc++.h>
#define ll long long int
#define LIMIT 100005
using namespace std;

vector< vector<int> > v(LIMIT);
vector<int> visited(LIMIT, 0);
vector<int> danger(LIMIT, 0);
int n, m, x, y;
int final_count = 0;
void DFS(int start, int count, int prev) {
    if(count > m)
        return;
    if(danger[start] && (prev >= 1 || prev == -1))
        count++;
    else
        count = 1;
    visited[start] = 1;
    if(v[start].size() == 1 && visited[v[start][0]]) {
        if(count <= m)
            final_count++;
    }
    for(int i = 0 ; i < v[start].size() ; ++i) {
        if(!visited[v[start][i]])
            DFS(v[start][i], count, danger[start]);
    }
}

int main() {
    scanf("%d%d", &n, &m);
    for(int i = 0 ; i < n ; i++) {
        scanf("%d", &x);
        danger[i] = x;
    }
    for(int i = 0 ; i < n - 1 ; ++i) {
        scanf("%d%d", &x, &y);
        v[x - 1].push_back(y - 1);
        v[y - 1].push_back(x - 1);
    }

    DFS(0, 0, -1);
    cout << final_count;
    return 0;
}

