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

vector<vector<double> > v;
vector< vector<int> > visited;
int r, c;
double recurse(int rs, int cs, int s) {
    if(s == 0)
        return 0;
    if(rs >= r || cs >= c || cs < 0 || rs < 0) {
        return 0;
    }

    visited[rs][cs]++;
    return max(pow(v[rs][cs], visited[rs][cs] - 1))

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    int t;
    int rs, cs, s;
    cin >> t;
    double pa, pna, m;
    char ch;
    f(l, 1, t + 1) {
        cin >> r >> c >> rs >> cs >> s;
        cin >> pa >> pna;
        v.resize(r, vector<double>(c, 0));
        visited.resize(r, vector<double>(c, 0));
        f(i, 0, r) {
            f(j, 0, c) {
                cin >> ch;
                if(ch == '.') {
                    v[i][j] = pna;
                }
                else if(ch == 'A') {
                    v[i][j] = pa;
                }
            }
        }
        m = max(recurse(rs + 1, cs, s),
                recurse(rs - 1, cs, s),
                recurse(rs, cs - 1, s),
                recurse(rs, cs + 1, s));
        cout << m;
    }
    return 0;
}

