/* raj454raj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%I64d",&x)
#define pi(x) printf("%d\n",x)
#define pll(x) printf("%I64d\n",x)
#define f(i,a,b) for(int i=a;i<b;i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
#define LET(x,a) __typeof(a) x(a)
#define TR(v,it) for( LET(it,v.begin()) ; it != v.end(); it++)
#define SET(a,b) memset(a,b,sizeof(a))
#define sortv(a) sort(a.begin(),a.end())
#define all(a) a.begin(),a.end()
const int M = 1000000007;

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector< pii > vpii;

int n, m;
char arr[52][52];
map< pii, set<pii> > graph;
pii start;
map<pii, bool> visited;

void insert_to_graph(int i, int j) {
    pii tmp = mp(i, j);
    if(i > 0 && arr[i - 1][j] == arr[i][j])
        graph[tmp].insert(mp(i - 1, j));
    if(j > 0 && arr[i][j - 1] == arr[i][j])
        graph[tmp].insert(mp(i, j - 1));
    if(i < n - 1 && arr[i + 1][j] == arr[i][j])
        graph[tmp].insert(mp(i + 1, j));
    if(j < m - 1 && arr[i][j + 1] == arr[i][j])
        graph[tmp].insert(mp(i, j + 1));
}

bool dfs(pii curr, pii prev) {
    set<pii>::iterator it;
    visited[curr] = true;
    for(it = graph[curr].begin() ; it != graph[curr].end() ; ++it) {
        if(*it != prev) {
            if(!visited[*it])
                dfs(*it, curr);
            else
                return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin >> n >> m;
    string s;
    f(i, 0, n) {
        cin >> s;
        f(j, 0, m) {
            arr[i][j] = s[j];
        }
    }
    f(i, 0, n) {
        f(j, 0, m) {
            insert_to_graph(i, j);
        }
    }

    map< pii, set<pii> >::iterator it;
    /*
    for(it = graph.begin() ; it != graph.end() ; ++it) {
        cout << "(" << it->first.first << ", " << it->first.second << ") --> ";
        for(set<pii>::iterator jt = it->second.begin() ; jt != it->second.end() ; ++jt) {
            cout << "(" << jt->first << ", " << jt->second << ") ";
        }
        cout << endl;
    }
    */
    start = mp(-1, -1);
    for(it = graph.begin() ; it != graph.end() ; ++it) {
        if(dfs(it->first, start)) {
            cout << "Yes";
            return 0;
        }
        visited.clear();
    }
    cout << "No";
    return 0;
}

