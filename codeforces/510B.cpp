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

char arr[52][52];
bool visited[52][52];
int n, m;

bool validneighbor(int i, int j, int previ, int prevj) {
    return ((previ != i) || (prevj != j)) && i >= 0 && i < n && j >= 0 && j < m;
}

bool checkvisited(int i, int j, int previ, int prevj) {
    return (i >= 0 && i < n && j >= 0 && j < m) &&
           (previ >= 0 && previ < n && prevj >= 0 && prevj < m) &&
           visited[i][j] && (i != previ || j != prevj) &&
           arr[previ][prevj] == arr[i][j];
}

bool dfs(int i, int j, int previ, int prevj, int cyclelen) {
    visited[i][j] = true;
    if(previ == -10 && prevj == -10) {
        return ((arr[i][j] == arr[i + 1][j]) && dfs(i + 1, j, i, j, cyclelen + 1)) ||
               ((arr[i][j] == arr[i][j + 1]) && dfs(i, j + 1, i, j, cyclelen + 1));
    }
    if(validneighbor(i, j, previ, prevj)) {

        if(arr[i][j] == arr[previ][prevj] &&
           (checkvisited(i + 1, j, previ, prevj) ||
            checkvisited(i, j + 1, previ, prevj) ||
            checkvisited(i - 1, j, previ, prevj) ||
            checkvisited(i, j - 1, previ, prevj))) {
            cout << i << " " << j << " " << previ << " " << prevj << endl;
            cout << checkvisited(i + 1, j, previ, prevj) << checkvisited(i, j + 1, previ, prevj) << checkvisited(i - 1, j, previ, prevj) << checkvisited(i, j - 1, previ, prevj) << endl;

            return true;
        }
        return arr[i][j] == arr[previ][prevj] &&
               ((dfs(i + 1, j, i, j, cyclelen + 1)) ||
                (dfs(i, j + 1, i, j, cyclelen + 1)) ||
                (dfs(i - 1, j, i, j, cyclelen + 1)) ||
                (dfs(i, j - 1, i, j, cyclelen + 1)));
    }
    return false;
}

void clearvisited() {
    f(i, 0, n) {
        f(j, 0, m) {
            visited[i][j] = false;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin >> n >> m;
    string s;
    for(int i = 0 ; i < n ; ++i) {
        cin >> s;
        for(int j = 0 ; j < s.size() ; ++j) {
            arr[i][j] = s[j];
            visited[i][j] = false;
        }
    }

    f(i, 0, n) {
        f(j, 0, m) {
            if(dfs(i, j, -10, -10, 1)) {
                cout << "Yes";
                return 0;
            }
            clearvisited();
        }
    }
    cout << "No";
    return 0;
}

