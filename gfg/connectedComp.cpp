#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class Graph {
    private:
        int V;
        list<int> *adj;
        bool dfsutil(int, bool[], vector<int>);
    public:
        Graph(int V) {
            this->V = V;
            adj = new list<int>[V];
        }
        int DFS();
        void addEdge(int, int);
};

vector<int> tmp;

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
    adj[w].push_back(v);
}

bool Graph::dfsutil(int start, bool visited[], vector<int> tillnow) {
    if(visited[start] == true) {
        for(int i = 0 ; i < tillnow.size() ; ++i) {
            cout << tillnow[i] << endl;
        }
        return true;
    }
    if(tillnow.size() == 3)
        return true;
    tillnow.push_back(start);
    visited[start] = true;
    tmp.push_back(start);
    list<int>::iterator it;
    int flag = 0;
    for(it = adj[start].begin() ; it != adj[start].end() ; ++it) {
        if(!visited[*it])
            if(dfsutil(*it, visited, tillnow)) {
                flag = 1;
                break;
            }
    }
    if(flag)
        return true;
    return false;
}

int Graph::DFS() {
    bool *visited = new bool[this->V];
    vector<int> component;
    for(int i = 0 ; i < V ; ++i)
        visited[i] = false;

    vector<int> t;
    for(int i = 0 ; i < V ; ++i) {
        if(!visited[i]) {
            tmp.clear();
            if(dfsutil(i, visited, t))
                break;
            component = tmp;
            for(int i = 0 ; i < component.size() ; ++i) {
                cout << component[i] << " ";
            }
            for(int j = 0 ; j < V ; ++j)
                visited[j] = false;
            cout << endl;
        }
    }
    return 0;
}

int main() {
    int n, m;
    int x, y;
    scanf("%d%d", &n, &m);
    Graph g(n);
    for(int i = 0 ; i < m ; ++i) {
        scanf("%d%d", &x, &y);
        g.addEdge(x - 1, y - 1);
    }

    cout << g.DFS();
    return 0;
}

