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
const int M = 1000000007;

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector< pii > vpii;
int n, m;
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

int dijkstra(vector<set<int> >& graph) {
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
    return d[n - 1];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin >> n >> m;
    set<pii> all;
    vector< set<int> > graph1, graph2;
    graph1.resize(n);
    graph2.resize(n);
    f(i, 0, n) {
        f(j, i + 1, n) {
            all.insert(mp(i, j));
        }
    }
    set<pii> railway;
    int x, y;
    while(m--) {
        cin >> x >> y;
        x--;y--;
        if(x < y)
            railway.insert(mp(x, y));
        else
            railway.insert(mp(y, x));
        graph1[x].insert(y);
        graph1[y].insert(x);
    }
    set<pii> bus;
    set<pii> railwaycopy(railway.begin(), railway.end());
    set_difference(all.begin(), all.end(),
                   railwaycopy.begin(), railwaycopy.end(),
                   inserter(bus, bus.begin()));
    TR(bus, it) {
        graph2[it->first].insert(it->second);
        graph2[it->second].insert(it->first);
    }

    d.resize(n, INT_MAX);
    int a = dijkstra(graph1);
    d.clear();
    d.resize(n, INT_MAX);
    int b = dijkstra(graph2);
    if(max(a, b) != INT_MAX)
        cout << max(a, b);
    else
        cout << -1;
    return 0;
}

