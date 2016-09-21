#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
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
    ll a, b, t, n, k, res, cnt;
    ll m = 1000000007;
    cin >> t;
    for(ll l = 1  ; l <= t ; ++l) {
        cin >> a >> b >> n >> k;
        cnt = 0;
        for(ll i = 1 ; i <= n ; ++i) {
            for(ll j = 1 ; j <= n ; ++j) {
                if(i == j)
                    continue;
                if(((modpow(i, a, k) + modpow(j, b, k)) % k) % k == 0) {
                    cnt++;
                }
            }
        }
        cout << "Case #" << l << ": " << cnt % m << endl;
    }
    return 0;
}

