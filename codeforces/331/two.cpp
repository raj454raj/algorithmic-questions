#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> v[i];
    }
    ll curr = 0, cnt = 0, diff = 0;
    for(int i = 0 ; i < n ; ++i) {
        diff = abs(curr - v[i]);
        cnt += diff;
        curr = v[i];
    }
    cout << cnt;
    return 0;
}

