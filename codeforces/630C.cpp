#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll sum = 0;
    for(ll i = 1 ; i <= n ; ++i)
        sum += 1LL << i;
    cout << sum;
    return 0;
}

