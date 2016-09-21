/* raj454raj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define pi(x) printf("%d\n",x)
#define pll(x) printf("%lld\n",x)
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
vector< set<int> > graph;
vector<int> d;

int pickmin(vector<bool>& splset) {
    int m = INT_MAX, mi = -1;
    f(i, 0, d.size()){
        if(!splset[i] && d[i] <= m) {
            m = d[i];
            mi = i;
        }
    }
    return mi;
}

void dijkstra() {
    vector<bool> splset;
    splset.resize(n, false);
    d[0] = 0;
    int index;
    f(i, 0, n) {
        index = pickmin(splset);
        splset[index] = true;
        for(set<int>::iterator it = graph[index].begin() ; it != graph[index].end() ; ++it) {
            if(!splset[*it] && d[index] != INT_MAX && d[index] + 1 < d[*it]) {
                d[*it] = d[index] + 1;
            }
        }
    }
}

void solution() {
    f(i, 0, d.size()) {
        cout << i + 1 << " " << d[i] << endl;
    }
    cout << "*********************\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int x, y;
    cin >> n >> m;
    d.resize(n, INT_MAX);
    graph.resize(n);
    f(i, 0, n)
        graph[i].clear();
    while(m--) {
        cin >> x >> y;
        x--, y--;
        graph[x].insert(y);
        graph[y].insert(x);
    }

    dijkstra();
    solution();
    return 0;
}

