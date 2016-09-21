/* raj454raj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
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

unordered_map<int, set<int> > g;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, x, y;
    cin >> n >> m;
    vector<int> v(n + 2, 0);
    f(i, 1, n + 1) {
        g[i].clear();
    }
    f(i, 0, m) {
        cin >> x >> y;
        g[x].insert(y);
        v[x] = g[x].size();
        g[y].insert(x);
        v[y] = g[y].size();
    }
    int ans = 0, flag;
    while(1) {
        flag = 0;
        f(i, 1, n + 1) {
            if(v[i] == 1) {
                g[*g[i].begin()].erase(i);
                g.erase(i);
                flag = 1;
            }
        }
        f(i, 1, n + 1) {
            v[i] = g[i].size();
        }
        if(flag)
            ans++;
        else
            break;
    }
    cout << ans;
    return 0;
}
