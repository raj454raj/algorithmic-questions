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
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    int u, v, l;
    int w[100005] = {0};

    vector<vector<int> > vec(m);
    vector<int> tmp;
    for(int i = 0 ; i < m ; ++i) {
        cin >> u >> v >> l;
        tmp.clear();
        tmp.push_back(u);
        tmp.push_back(v);
        tmp.push_back(l);
        vec[i] = tmp;
    }
    if(k == 0) {
        cout << -1;
        return 0;
    }

    int x;
    for(int i = 0 ; i < k ; ++i) {
        cin >> x;
        w[x] = 1;
    }

    int mi = INT_MAX;
    for(int i = 0 ; i < m ; ++i) {
        if((!w[vec[i][0]] && w[vec[i][1]]) || (w[vec[i][0]] && !w[vec[i][1]]))
                mi = min(mi, vec[i][2]);
    }
    if(mi == INT_MAX)
        cout << -1;
    else
        cout << mi;
    return 0;
}

