#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int gcd(int n,int m) {
    if(m<=n && n%m == 0)
        return m;
    if(n < m)
        return gcd(m,n);
    else
        return gcd(m,n%m);
}
int main() {
    int n, x;
    scanf("%d", &n);
    ll total = n * n;
    vector<ll> v;
    for(ll i = 0 ; i < total ; ++i) {
        scanf("%d", &x);
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0 ; i < n ; ++i)
        cout << v[i] << " ";
    return 0;
}

