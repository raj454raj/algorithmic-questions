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
// Testing for STOPSTALK
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; ++i) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0 ; i < m - 1; ++i) {
        cout << upper_bound(a.begin(), a.end(), b[i]) - a.begin() << " ";
    }
    cout << upper_bound(a.begin(), a.end(), b[m - 1]) - a.begin();
    return 0;
}

