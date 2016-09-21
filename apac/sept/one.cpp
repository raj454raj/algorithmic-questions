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

int a[3002][3002] = {0};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int r, c, k, x, y;
    ll ans;
    for(int l = 1 ; l <= t ; ++l) {
        cin >> r >> c >> k;
        while(k--) {
            cin >> x >> y;
            a[x][y] = 1;
        }
        ans = 0;
        f(i, 1, r) {
            f(j, 1, c) {
                if(a[i - 1][j] == 0 && a[i][j - 1] == 0 &&  a[i - 1][j - 1] == 0) {
                    ans +=
                }
            }
        }
        f(i = 0 ; i < r ; ++i) {
            f(j, 0, c) {
                a[i][j] = 0;
            }
        }

    }
    return 0;
}

