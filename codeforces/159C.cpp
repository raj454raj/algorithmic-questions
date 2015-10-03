#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector< vector<int> > v(26);
vector<int> tmp;
int main() {
    int k, n, p;
    char c;
    scanf("%d", &k);
    string s;
    cin >> s;
    int l;
    tmp.resize(k * s.size() + 1);
    for(int i = 0 ; i < s.size() ; ++i) {
        v[s[i] - 'a'].push_back(i + 1);
        tmp[i + 1] = s[i] - 'a';
    }

    for(int i = 0 ; i < 26 ; ++i) {
        for(int j = 0 ; j < k - 1; ++j) {
            l = v[i].size();
            for(int p = 0 ; p < l ; ++p) {
                v[i].push_back(v[i][p] + s.size());
                tmp[v[i][p] + s.size()] = i;
            }
        }
    }
    scanf("%d", &n);
    int t;
    while(n--) {
        cin >> p >> c;
        if(v[c - 'a'][p - 1] == -1) {
            t = p - 1;
            while(v[c - 'a'][t] == -1)
                t++;
            tmp[v[c - 'a'][t]] = -1;
            v[c - 'a'][t] = -1;
        }
        else {
            tmp[v[c - 'a'][p - 1]] = -1;
            v[c - 'a'][p - 1] = -1;
        }
    }
    for(int i = 1 ; i < tmp.size() ; ++i) {
        if(tmp[i] != -1)
        cout << (char)(tmp[i] + 'a');
    }
    return 0;
}

