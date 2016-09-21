/* raj454raj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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

unordered_map<string, vector<string> > graph;
unordered_map<string, bool> valid;
unordered_map<string, bool> visited;
bool recurse(string s) {
    if(valid[s]) return true;
    if(graph.find(s) == graph.end()) {
        valid[s] = false;
        return false;
    }
    if(visited[s])
        return valid[s];
    bool ans = true;
    bool allvisited = false;
    for(auto it = graph[s].begin() ; it != graph[s].end() ; ++it) {
        if(valid[*it]) {
            allvisited = true;
            continue;
        }
        if(!visited[*it]) {
            visited[s] = true;
            ans &= recurse(*it);
            if(ans == false) {
                valid[s] = false;
                return false;
            }
            allvisited = true;
        }
    }
    if(allvisited) {
        valid[s] = true;
        return ans;
    }
    else {
        valid[s] = false;
        return false;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, t;
    string good = "GOOD";
    string bad = "BAD";
    string left, arg, s, ans;
    int flag = 0;
    cin >> t;
    f(l, 1, t + 1) {
        cin >> n;
        while(n--) {
            left = "";
            arg = "";
            cin >> s;
            flag = 0;
            f(i, 0, s.size()) {
                if(s[i] == '=')
                    flag = 1;
                if(s[i] == '(') {
                    flag = 2;
                    continue;
                }
                if(s[i] == ',') {
                    graph[left].pb(arg);
                    arg = "";
                    continue;
                }
                if(s[i] == ')') {
                    break;
                }
                if(flag == 0) {
                    left += s[i];
                }
                if(flag == 1) {
                    continue;
                }
                if(flag == 2) {
                    arg += s[i];
                }
            }
            if(arg != "")
                graph[left].pb(arg);
            else {
                valid[left] = true;
            }
        }
        flag = 0;
        visited.clear();
        for(unordered_map<string, vector<string> >::iterator it = graph.begin() ; it != graph.end() ; ++it) {
            if(valid[it->first])
                continue;
            else {
                if(!recurse(it->first)) {
                    flag = 1;
                    break;
                }
                visited.clear();
            }
        }
        if(flag)
            ans = bad;
        else
            ans = good;
        graph.clear();
        valid.clear();
        cout << "Case #" << l << ": " << ans << endl;
    }
    return 0;
}

