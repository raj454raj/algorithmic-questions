#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
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
    ull n, k, x;
    cin >> n >> k;
    vector< pair<ull, int> > v;
    ull sum = 0;
    for(ull i = 0  ; i < n ; ++i) {
        cin >> x;
        v.push_back(make_pair(x, 0));
        sum += x;
    }
    ull ans = 0;
    vector<ull> c;
    ull nsum = 0, sqsum = 0;
    for(ull i = 0 ; i < k ; ++i) {
        cin >> x;
        v[x - 1].second = 1;
        nsum += v[x - 1].first;
        sqsum += v[x - 1].first * v[x - 1].first;
        c.push_back(x);
    }
    for(ull i = 0 ; i < v.size() - 1 ; ++i) {
        if(v[i].second == 1)
            continue;
        else {
            if(v[i + 1].second == 1)
                continue;
            ans += v[i].first * v[i + 1].first;
        }
    }

    if(!v[0].second && !v[v.size() - 1].second)
        ans += v[0].first * v[v.size() - 1].first;

    for(ull i = 0 ; i < c.size() ; ++i) {
        ans += (sum - v[c[i] - 1].first) * v[c[i]-1].first;
    }
    ans -= (nsum * nsum - sqsum) / 2;
    cout << ans;
    return 0;
}

