#include<bits/stdc++.h>
using namespace std;

vector< set<int> > nodes;
vector<int> visited;
void insertNeighbour(int a, int b) {
    nodes[a].insert(b);
    nodes[b].insert(a);
}

int dfs(int start) {
    if(visited[start] == 1)
        return 0;
    for(set<int>::iterator it = nodes[start].begin() ; it != nodes[start].end() ; ++it) {
        visited[start] = 1;
        dfs(*it);
    }
    return 1;
}
int numIslands(vector< vector<char> >& grid) {
    int count = 1;
    nodes.clear();
    visited.clear();
    vector< vector< pair<char, int> > > v;
    vector< pair <char, int> > tmp;
    int m, n;
    m = grid.size();
    for(int i = 0 ; i < grid.size() ; ++i) {
        for(int j = 0 ; j < grid[i].size() ; ++j) {
            n = grid[i].size();
            if(grid[i][j] == '1')
                tmp.push_back(make_pair(grid[i][j], count++));
            else
                tmp.push_back(make_pair(grid[i][j], 0));
        }
        v.push_back(tmp);
        tmp.clear();
    }

    nodes.resize(count);
    visited.resize(count);
    for(int i = 0 ; i < grid.size() ; ++i) {
        for(int j = 0 ; j < grid[i].size() ; ++j) {
            if(grid[i][j] == '1') {
                if(j > 0 && grid[i][j-1] == '1')
                    insertNeighbour(v[i][j].second, v[i][j-1].second);
                if(i > 0 && grid[i-1][j] == '1')
                    insertNeighbour(v[i][j].second, v[i-1][j].second);
                if(i < m - 1 && grid[i+1][j] == '1')
                    insertNeighbour(v[i][j].second, v[i+1][j].second);
                if(j < n - 1 && grid[i][j+1] == '1')
                    insertNeighbour(v[i][j].second, v[i][j+1].second);
            }
        }
    }
    int fin = 0;
    for(int i = 1 ; i < count ; i++)
        fin += dfs(i);
    return fin;
}

int main() {
    vector<char> tmp;
    string s;
    int l;
    vector< vector<char> > board;
    for(int i = 0 ; i < 3 ; ++i) {
        cin >> s;
        l = s.size();
        for(int j = 0 ; j < s.size() ; ++j)
            tmp.push_back(s[j]);
        board.push_back(tmp);
        tmp.clear();
    }

    cout << numIslands(board);
    return 0;
}
