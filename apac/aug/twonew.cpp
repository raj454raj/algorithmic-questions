/* raj454raj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define pi(x) printf("%d\n",x)
#define pll(x) printf("%lld\n",x)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fe(i,a,b) for(ll i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
#define LET(x,a) __typeof(a) x(a)
#define TR(v,it) for( LET(it,v.begin()) ; it != v.end(); it++)
#define SET(a,b) memset(a,b,sizeof(a))
#define sortv(a) sort(a.begin(),a.end())
#define all(a) a.begin(),a.end()
const ll M = 1000000007;
ll mpow(ll a, ll n, ll m) {
    ll ret = 1;
    ll b = a;
    while(n) {
        if(n&1)
            ret = (ret * b) % m;
        b = (b * b) % m;
        n >>= 1;
    }
    return (ll)ret;
}

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector< pii > vpii;

int m1[1000005] = {0};
int m2[1000005] = {0};

int main() {
    ll t, a, b, n, k, ans = 0;
    sll(t);
    fe(l, 1, t) {
        ans = 0;
        sll(a); sll(b); sll(n); sll(k);
        f(i, 1, k) {
            m1[mpow(i % k, a, k) % k]++
            m2[mpow(i % k, b, k) % k]++;
        }
        f(i, 1, k) {
            if(i == 0)
                ans = (ans + m1[0] * m2[0] % k) % k;
            else
                ans = (ans + (m1[i] * m2[k - i]) % k) % k;
        }
        cout << "Case #" << l << ":" << ans << endl;
    }
    return 0;
}

