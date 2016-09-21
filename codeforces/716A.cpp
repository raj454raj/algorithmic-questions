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

int v[100005];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, c;
    cin >> n >> c;
    f(i, 0, n) {
        cin >> v[i];
    }
    int start = 1, prev = v[0];
    f(i, 1, n) {
        if(v[i] - prev > c)
            start = 1;
        else
            start++;
        prev = v[i];
    }
    cout << start;
    return 0;
}

