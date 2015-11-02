#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll n, x;
    scanf("%I64d", &n);
    vector<ll> v;
    vector<bool> h(300002, false);
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        if(x >= 1 && x <= n) {
            if(h[x] == true)
                v.push_back(x);
            else
                h[x] = true;
        }
        else
            v.push_back(x);
    }
    sort(v.begin(), v.end());
    int start = 1;
    while(start <= n && h[start] == true)
        start++;
    ll cnt = 0;
    for(int i = 0 ; i < v.size() ; ++i) {
        cnt += abs(start - v[i]);
        h[start] = true;
        while(start <= n && h[start] == true)
            start++;
    }
    cout << cnt;
    return 0;
}
