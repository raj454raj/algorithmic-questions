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

int min(int a, int b, int c) {
    int m = a;
    if(b < m)
        m = b;
    if(c < m)
        m = c;
    return m;
}
int maximalSquare(vector<vector<char>>& matrix) {
    int m = matrix.size();
    if(m == 0)
        return 0;
    int n = matrix[0].size();
    int max = 0;
    vector< vector<int> > s(m, vector<int>(n, 0));
    for(int i = 0 ; i < n ; ++i) {
            s[0][i] = 0;
    }
    for(int i = 0 ; i < m ; ++i) {
            s[i][0] = 0;
    }
    f(i, 0, m) {
        f(j, 0, n) {
            if(matrix[i][j] == '0')
                s[i][j] = 1;
        }
    }
    ll sum = 0;
    for(int i = 0 ; i < m ; ++i) {
        for(int j = 0 ; j < n ; ++j) {
            if(matrix[i][j] == '0') {
                if(i > 0 && j > 0) {
                    s[i][j] = min(s[i - 1][j - 1], s[i - 1][j], s[i][j - 1]) + 1;
                }
            }
            sum += s[i][j];
        }
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, t, r, c, k, x, y;
    cin >> t;
    f(l, 1, t + 1) {
        cin >> r >> c >> k;
        vector<vector<char > > v(r, vector<char>(c, '0'));
        f(i, 0, k) {
            cin >> x >> y;
            v[x][y] = '1';
        }
        cout << "Case #" << l << ": " << maximalSquare(v) << endl;
        v.clear();
    }
    return 0;
}

