#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[502][502] = {0};
ll r[502] = {0}, c[502] = {0};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll row = 0, tmp1 = 0, tmp2 = 0, posi, posj;
    for(int i = 0 ; i < n ; ++i) {
        row = 0;
        for(int j = 0 ; j < n ; ++j) {
            cin >> a[i][j];
            if(!a[i][j])
                posi = i, posj = j;
            if(i == j)
                tmp1 += a[i][j];
            if(i + j == n - 1)
                tmp2 += a[i][j];
            row += a[i][j];
            c[j] += a[i][j];
        }
        r[i] += row;
    }

    if(n == 1) {
        cout << 1;
        return 0;
    }

    ll starti = 0, startj = 0;
    if(posi == 0) starti = 1;
    if(posj == 0) startj = 1;

    ll ans = r[starti] - r[posi];
    if(ans <= 0) {
        cout << -1;
        return 0;
    }

    if(posi == posj)
        tmp1 += ans;
    if(posi + posj == n - 1)
        tmp2 += ans;

    r[posi] = r[starti];
    c[posj] = c[startj];

    ll t = r[0];
    if(tmp1 != t || tmp2 != t) {
        cout << -1;
        return 0;
    }
    for(int i = 0 ; i < n ; ++i) {
        if(r[i] != t || c[i] != t) {
            cout << -1;
            return 0;
        }
    }
    cout << ans;
    return 0;
}

