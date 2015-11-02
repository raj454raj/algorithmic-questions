#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int t, n, m;
    cin >> n >> m;
    vector<int> v(26);
    vector<int> tmp(26);
    string s;
    cin >> s;

    for(int i = 0 ; i < 26 ; ++i) {
        v[i] = i;
    }
    for(int i = 0 ; i < 26 ; ++i) {
        tmp[i] = i;
    }
    int tm;
    char c;
    string x, y;
    for(int i = 0 ; i < m ; ++i) {
        cin >> x >> y;
        c = v[tmp[x[0] - 'a']];
        v[tmp[x[0] - 'a']] = v[tmp[y[0] - 'a']];
        v[tmp[y[0] - 'a']] = c;
        tm = tmp[x[0] - 'a'];
        tmp[x[0] - 'a'] = tmp[y[0] - 'a'];
        tmp[y[0] - 'a'] = tm;
    }
    for(int i = 0 ; i < s.size() ; ++i)
        cout << (char)(v[s[i] - 'a'] + 'a');
    return 0;
}
