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
    string s;
    cin >> s;
    vector<int> v(26, 0);
    f(i, 0, s.size()) {
        if(s[i] == 'R')
            v['L' - 'A']--;
        else if(s[i] == 'D')
            v['U' - 'A']--;
        else
            v[s[i] - 'A']++;
    }
    int tmp = (abs(v['L' - 'A']) + abs(v['U' - 'A']));
    if(tmp&1)
        cout << -1;
    else
        cout << tmp / 2;
    return 0;
}

