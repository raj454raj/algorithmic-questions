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
vector< set<int> > v;
vector<int> cnt;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, x, y;
    cin >> n >> m;
    v.resize(n + 2);
    cnt.resize(n + 2);
    f(i, 1, n + 1) {
        v[i].clear();
        cnt[i] = 0;
    }
    f(i, 0, m) {
        cin >> x >> y;
        v[x].insert(y);
        cnt[x] = v[x].size();
        v[y].insert(x);
        cnt[y] = v[y].size();
    }

    int flag = 0;
    int ans = 0;
    while(1) {
        flag = 0;
        for(int i = 1 ; i <= n ; ++i) {
            if(cnt[i] == 1) {
                v[*v[i].begin()].erase(i);
                v[i].clear();
                flag = 1;
            }
        }
        if(!flag)
            break;
        ans++;
        for(int i = 1 ; i <= n ; ++i) {
            cnt[i] = v[i].size();
        }
    }
    cout << ans;
    return 0;
}

