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

void recurse(multiset<int>& s, int target, int& ans) {
    multiset<int>::iterator it = s.begin();
    int thirdmax = *it;++it;
    int secondmax = *it;++it;
    int firstmax = *it;
    cout << thirdmax << " " << secondmax << " " << firstmax << endl;
    if(firstmax == target && thirdmax == target)
        return;
    s.erase(it);
    ans++;
    if(firstmax == thirdmax) {
        // First iteration
        if(firstmax / 3 >= target)
            s.insert(firstmax / 3);
        else
            s.insert(target);
    }
    else {
        if(secondmax - thirdmax + 1 > target)
            s.insert(secondmax - thirdmax + 1);
        else
            s.insert(target);
    }
    recurse(s, target, ans);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, x, y;
    multiset<int> s;
    cin >> x >> y;
    s.insert(x);
    s.insert(x);
    s.insert(x);
    int ans = 0;
    recurse(s, y, ans);
    cout << ans;
    return 0;
}

