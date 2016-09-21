#include<bits/stdc++.h>
#define ll long long int
#define M 1000000007
using namespace std;

template <typename T>
T modpow(T base, T exp, T modulus) {
  base %= modulus;
  T result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll t, a, b, n, k, res, tmp;
    cin >> t;
    unordered_map<ll, ll> m1, m2;
    unordered_map<ll, ll>::iterator it;
    for(ll l = 1 ; l <= t ; ++l) {
        m1.clear();
        m2.clear();
        cin >> a >> b >> n >> k;
        for(ll i = 1 ; i <= n ; ++i)
            m1[modpow(i, a, k) % k]++;

        for(ll i = 1 ; i <= n ; ++i)
            m2[modpow(i, b, k) % k]++;

        res = 0;
        for(it = m1.begin() ; it != m1.end() ; ++it) {
            if(it->first == 0)
                res = (res + (it->second * m2[0]) % M) % M;
            else
                res = (res + (it->second * m2[k - it->first]) % M) % M;
        }

        for(ll i = 1 ; i <= n ; ++i) {
            if((ll)(modpow(i, a, k) + modpow(i, b, k)) % k == 0)
                res--;
        }
        cout << "Case #" << l << ": " << res % M << endl;

    }
    return 0;
}

