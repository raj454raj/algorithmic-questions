#include<bits/stdc++.h>
using namespace std;
vector< vector<long long int> > graph;

void addEdge(long long int x, long long int y) {
    graph[x].push_back(y);
    graph[y].push_back(x);
}

vector<long long int> visited;
vector<long long int> a;
long long int cnt;
void dfs(int start) {
    visited[start] = 1;
    cnt += a[start];
    for(long long int i = 0 ; i < graph[start].size() ; ++i) {
        if(visited[graph[start][i]] == 0)
            dfs(graph[start][i]);
    }
}

int main() {
    int t;
    long long int n, m, x, y;
    scanf("%d", &t);
    while(t--) {
        scanf("%lld%lld", &n, &m);
        a.clear();
        graph.clear();
        graph.resize(n + 1);
        for(int i = 0 ; i <= n ; ++i)
            graph[i].clear();
        while(m--) {
            scanf("%lld%lld", &x, &y);
            addEdge(x, y);
        }
        a.push_back(0);
        for(long long int i = 0 ; i < n ; ++i) {
            scanf("%lld", &x);
            a.push_back(x);
        }
        visited.clear();
        visited.resize(n + 1);

        long long int curr, max = -1;
        
        for(long long int i = 1 ; i <= n ; ++i) {
            cnt = 0;
            dfs(i);
            if(cnt > max)
                max = cnt;
        }   
        printf("%lld\n", max);
            
    }
    return 0;
} 
