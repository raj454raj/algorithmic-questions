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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int x, y;
    int a, b, c;
    int ans = 0;
    cin >> x >> y;
    a = b = c = y;
    while(1) {
        if(a >= x && b >= x && c >= x) {
            break;
        }
        ans++;
        if(ans % 3 == 1)
            a = b + c - 1;
        else if(ans % 3 == 2)
            b = a + c - 1;
        else
            c = a + b - 1;
    }
    cout << ans;
    return 0;
}

