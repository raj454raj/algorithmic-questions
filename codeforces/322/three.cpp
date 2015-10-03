#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool comp(ll a, ll b) {
    return a%10 > b%10;
}
int main() {
    ll n, x, k;
    ios_base::sync_with_stdio(0);
    cin >> n >> k;
    vector<ll> v(n);
    for(ll i = 0 ; i < n ; ++i) {
        cin >> x;
        v[i] = x;
    }
    sort(v.begin(), v.end(), comp);
    ll req = 0, sum = 0;
    for(int i = 0 ; i < v.size() ; ++i) {
        req = (110 - v[i]) % 10;
        if(k >= req) {
            v[i] += req;
            k -= req;
        }
    }
    for(int i = 0 ; i < v.size() ; ++i) {
        if(v[i]%10 == 0 && 100 - v[i] > 0) {
            if(k >= 100 - v[i]) {
                k -= (100 - v[i]);
                v[i] = 100;
            }
            else {
                v[i] += k;
                k = 0;
                break;
            }
        }
    }
    sum = 0;
    for(int i = 0 ; i < v.size() ; ++i)
        sum += v[i] / 10;
    cout << sum << endl;
    return 0;
}

