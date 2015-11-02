#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    ll n, x, t, k, q;
    scanf("%lld", &n);
    vector<ll> v(n);
    vector<ll> s(n);
    for(int i = 0 ; i < n ; ++i) {
        scanf("%lld", &x);
        v[i] = x;
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    for(int i = 0 ; i < n ; i++) {
        sum += v[i];
        s[i] = sum;
    }

    scanf("%lld", &q);
    while(q--) {
        scanf("%lld", &k);
        t = n / (k + 1);
        if(t + t*k != n) {
            sum = s[t - 1] + v[t];
        }
        else
            sum = s[t - 1];
        cout << sum << endl;
    }

    return 0;
}

