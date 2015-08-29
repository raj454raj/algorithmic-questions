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
class Graph {
    private:
        int V;
        vector< set<int> > adj;
    public:
        void addEdge(int, int);
        Graph(int V) {
            this->V = V;
            adj.resize(V);
        }
        vector<int> dfs(int, int, vector<int>, bool[]);
        void DFS(int, int);
};

void Graph::addEdge(int v, int w) {
    adj[v].insert(w);
    adj[w].insert(v);
}


vector<int> Graph::dfs(int start, int target, vector<int> tmp, bool visited[]) {
    visited[start] = true;
    tmp.push_back(start);
    if(start == target)
        return tmp;
    for(set<int>::iterator it = adj[start].begin() ; it != adj[start].end() ; ++it) {
        if(!visited[*it])
            return dfs(*it, target, tmp, visited);
    }
    vector<int> t;
    return t;
} 

void Graph::DFS(int v, int w) {
    bool *visited = new bool[V];
    for(int i = 0 ; i < V ; ++i) {
        visited[i] = false;
    }
    vector<int> t;
    vector<int> tmp = dfs(v, w, t, visited);
    if(tmp.size()) {
        cout << "Path found: ";
        for(int i = 0 ; i < tmp.size() ; ++i) {
            cout << tmp[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Path not found\n";
    }

} 

int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.DFS(1, 4);
    return 0;
}

