#include<bits/stdc++.h>
#define ll long long int
//#define g getchar_unlocked
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
int main() {
    ios_base::sync_with_stdio(0);
    int t, n, m;
    cin >> n >> m;
    vector< vector<int> > v(26);
    string s;
    cin >> s;

    map < int, vector<int> > mp;
    for(int i = 0 ; i < n ; ++i) {
        mp[s[i] - 'a'].push_back(i);
    }
    char x, y;
    vector<int> tmp;
    for(int i = 0 ; i < m ; ++i) {
        cin >> x >> y;
        tmp = mp[x - 'a'];
        mp[x - 'a'] = mp[y - 'a'];
        mp[y - 'a'] = tmp;
    }
    string fin(n, '0');
    map<int, vector<int> >::iterator it;
    for(it = mp.begin() ; it != mp.end() ; ++it) {
        for(int j = 0 ; j < (it->second).size() ; ++j) {
            fin[it->second[j]] = (char)(it->first + 'a');
        }
    }
    cout << fin;
    return 0;
}

