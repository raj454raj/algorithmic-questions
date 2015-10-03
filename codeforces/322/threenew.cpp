#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n, x, k;
    ios_base::sync_with_stdio(0);
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        v[i] = x;
    }
    sort(v.begin(), v.end(), greater<int>());
    int tmp;
    for(int i = 0 ; i < n ;  ++i) {
        tmp = (v[i] / 10 + 1) * 10;
        if(k >= tmp - v[i]) {
            k -= tmp - v[i];
            v[i] = tmp;
        }
    }
    ll sum = 0;
    for(int i = 0 ; i < n ; ++i) {
        sum += v[i];
    }
    k = (k / 10) * 10;
    ll left = n * 100 - sum;
    if (k >= left)
        sum = n * 100;
    else
        sum = sum + k;
    cout << sum / 10;
    return 0;
}

