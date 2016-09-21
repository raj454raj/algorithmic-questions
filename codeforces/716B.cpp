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
    int wl = 0, j, start = 0;
    vector<int> v(26, 0);
    int qm = 0, distinct = 0;
    if(s.size() < 26) {
        cout << -1;
        return 0;
    }
    int pos = -1;
    f(i, 0, s.size()) {
        if(wl == 26) {
            if(qm + distinct == 26) {
                pos = i;
                break;
            }
            if(s[start] != '?')
                v[s[start] - 'A']--;
            start++;
            wl = i - start + 1;
        }

        if(s[i] == '?') {
            qm++;
            wl++;
        }
        else if(v[s[i] - 'A'] == 0) {
            v[s[i] - 'A']++;
            distinct++;
            wl++;
        }
        else {
            for(j = start ; j < i ; ++j) {
                if(s[j] == s[i]) {
                    start++;
                    break;
                }
                if(s[j] != '?') {
                    v[s[j] - 'A']--;
                    distinct--;
                }
                else
                    qm--;
                wl--;
                start++;
            }
        }
/*        cout << "******************************\n";
        cout << "s[i]=" << s[i] << endl;
        cout << "wl=" << wl << endl;
        cout << "distinct=" << distinct << endl;
        cout << "qm=" << qm << endl;
        cout << "start=" << start << endl;
        cout << "******************************\n";*/
    }
    int tmpstart = 0;
    if(wl == 26) {
        if(qm + distinct == 26) {
            for(int i = start ; i < start + 26 ; i++) {
                if(s[i] == '?') {
                    while(v[tmpstart]) tmpstart++;
                    s[i] = (char)(tmpstart + 'A');
                    tmpstart++;
                }
            }
            for(int i = 0 ; i < s.size() ; ++i) {
                if(s[i] == '?')
                    s[i] = 'A';
            }
            cout << s;
        }
        else {
            cout << -1;
        }
    }
    else
        cout << -1;

    return 0;
}

