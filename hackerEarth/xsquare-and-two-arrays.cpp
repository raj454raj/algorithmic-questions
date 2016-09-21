/* raj454raj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define pi(x) printf("%d\n",x)
#define pll(x) printf("%lld\n",x)
#define f(i,a,b) for(ll i=a;i<b;i++)
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

ll a[100005], b[100005];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, q;
    cin >> n >> q;
    f(i, 1, n + 1)
        cin >> a[i];
    f(i, 1, n + 1)
        cin >> b[i];
    for(ll i = 2 ; i <= n ; i += 2)
        swap(a[i], b[i]);
    f(i, 2, n + 1) {
        a[i] += a[i - 1];
        b[i] += b[i - 1];
    }
    a[0] = b[0] = 0;
    ll c, x, y;
    while(q--) {
        cin >> c >> x >> y;
        if(c == 1) {
            if(x&1)
                cout << a[y] - a[x - 1] << endl;
            else
                cout << b[y] - b[x - 1] << endl;
        }
        else {
            if(x&1)
                cout << b[y] - b[x - 1] << endl;
            else
                cout << a[y] - a[x - 1] << endl;
        }
    }
    return 0;
}

