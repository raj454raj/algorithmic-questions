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
vector<vector<int> > v;
vector<vector<int> > groups;
vector<int> visited;

int next_unused, n, m;
void dfs(int start, int group_index) {
    groups[group_index].pb(start);
    visited[start] = 1;
    f(i, 0, v[start].size()) {
        if(!visited[v[start][i]])
            dfs(v[start][i], group_index);
    }
}

int get_next(int start) {
    f(i, start + 1, n + 1) {
        if(!visited[i]) {
            next_unused = i;
            return i;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int x, y;
    cin >> n >> m;
    v.resize(n + 2);
    f(i, 1, n + 2) {
        v[i].clear();
    }
    visited.resize(n + 2, 0);
    while(m--) {
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    int no_groups = n / 3;
    int group_index = 0;
    groups.resize(no_groups);
    f(i, 0, no_groups)
        groups[i].clear();
    f(i, 1, n + 1) {
        if(!visited[i] && v[i].size() > 0) {
            if(group_index == no_groups) {
                cout << -1;
                return 0;
            }
            dfs(i, group_index++);
        }
        if(groups[group_index - 1].size() > 3) {
            cout << -1;
            return 0;
        }
    }

    next_unused = 0;
    f(i, 0, no_groups) {
        f(j, 0, groups[i].size()) {
            cout << groups[i][j] << " ";
        }
        f(j, 0, 3 - groups[i].size()) {
            cout << get_next(next_unused) << " ";
        }
        cout << endl;
    }

    return 0;
}

