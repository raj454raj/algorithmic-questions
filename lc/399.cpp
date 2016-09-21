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

unordered_map< string, vector< pair< string, double> > > graph;
unordered_map< string, bool > visited, tmpvisited;
void dfs(string start, string end, double &ans, int &found) {
    if(start == end) {
        found = 1;
        return;
    }
    visited[start] = true;
    vector< pair< string, double> >::iterator it;
    for(it = graph[start].begin() ; it != graph[start].end() ; ++it) {
        if(!visited[it->first]) {
            ans *= it->second;
            dfs(it->first, end, ans, found);
            if(found)
                return;
            else
                ans /= it->second;
            if(ans < 0)
                ans *= -1;
        }
    }
    return;
}

vector<double> calcEquation(vector<pair<string, string> > equations, vector<double>& values, vector<pair<string, string> > queries) {
    vector<double> res;
    f(i, 0, equations.size()) {
        visited[equations[i].first] = false;
        visited[equations[i].second] = false;
        graph[equations[i].first].push_back(mp(equations[i].second, values[i]));
        graph[equations[i].second].push_back(mp(equations[i].first, 1.0 / values[i]));
    }
    double ans;
    int found;
    tmpvisited = visited;
    f(i, 0, queries.size()) {
        ans = 1;
        found = 0;
        if(visited.find(queries[i].first) == visited.end() || visited.find(queries[i].second) == visited.end()) {
            res.pb(-1.0);
            continue;
        }
        if(queries[i].first != queries[i].second)
            dfs(queries[i].first, queries[i].second, ans, found);
        else
            found = 1;
        if(found)
            res.pb(ans);
        else
            res.pb(-1);
        visited = tmpvisited;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    vector<pair<string, string> > equations;
    equations.pb(mp("a", "b"));
    equations.pb(mp("b", "c"));
    equations.pb(mp("bc", "cd"));
    vector<double> values;
    values.pb(1.5);
    values.pb(2.5);
    values.pb(5);
    vector<pair<string, string> > queries;
    queries.pb(mp("a", "c"));
    queries.pb(mp("c", "b"));
    queries.pb(mp("bc", "cd"));
    queries.pb(mp("cd", "bc"));
    vector<double> res = calcEquation(equations, values, queries);
    for(int i = 0 ; i < res.size() ; ++i) {
        cout << res[i] << endl;
    }
    return 0;
}

