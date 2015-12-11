#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    ll n, x, y, z;
    vector<ll> a(4), b(4);
    cin >> n;
    for(int i = 0 ; i < n ; ++i) {
        cin >>  a[i] >> b[i];
    }
    vector<ll> v(3);
    if(n < 2)
        cout << "-1";
    else {
        if(n == 2) {
            if(a[0] != a[1] && b[0] != b[1]) {
                cout << abs(a[1] - a[0]) * abs(b[1] - b[0]);
            }
            else {
                cout << -1;
            }
        }
        else if(n == 3) {
            v[0] = (a[0] - a[1])*(a[0] - a[1]) + (b[0] - b[1]) * (b[0] - b[1]);
            v[1] = (a[0] - a[2])*(a[0] - a[2]) + (b[0] - b[2]) * (b[0] - b[2]);
            v[2] = (a[1] - a[2])*(a[1] - a[2]) + (b[1] - b[2]) * (b[1] - b[2]);
            sort(v.begin(), v.end());
            cout << (ll)sqrt(v[0] * v[1]);
        }
        else {
            v[0] = (a[0] - a[1])*(a[0] - a[1]) + (b[0] - b[1]) * (b[0] - b[1]);
            v[1] = (a[0] - a[2])*(a[0] - a[2]) + (b[0] - b[2]) * (b[0] - b[2]);
            v[2] = (a[0] - a[3])*(a[0] - a[3]) + (b[0] - b[3]) * (b[0] - b[3]);
            sort(v.begin(), v.end());
            cout << (ll)sqrt(v[0] * v[1]);
        }
    }
    return 0;
}
