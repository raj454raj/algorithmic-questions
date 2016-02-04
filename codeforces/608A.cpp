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
bool comp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, s, x, y;
    cin >> n >> s;
    vector<pair<ll, ll> > v;
    for(int i = 0 ; i < n ; ++i) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    ll sum = 0;
    sort(v.begin(), v.end(), comp);
    sum += s - v[0].first;
    for(int i = 0 ; i < n - 1 ; ++i) {
        if(sum < v[i].second) {
            sum += v[i].second - sum;
        }
        sum += v[i].first - v[i + 1].first;
    }
    if(sum < v[n - 1].second)
        sum += v[n - 1].second - sum;
    sum += v[n - 1].first;
    cout << sum;
    return 0;
}
