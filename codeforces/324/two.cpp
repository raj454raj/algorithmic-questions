#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define m 1000000007
ll power(ll a, ll b) {
    if(b == 0)
        return 1;
    if(b == 1)
        return a%m;
    else {
        ll tmp = power(a, b / 2);
        if(b&1)
            return (((tmp * tmp) % m) * a)%m;
        else
            return (tmp * tmp) % m;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    ll n;
    cin >> n;
    ll tt = (power(27, n) - power(7, n))%m;
    if(tt < 0)
        tt += m;
    cout << tt;
    return 0;
}

