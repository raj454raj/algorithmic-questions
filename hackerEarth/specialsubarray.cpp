#include<bits/stdc++.h>
#define ll long long int
//#define g getchar_unlocked
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
int main() {
    ios_base::sync_with_stdio(0);
    ll n, m, prev;
    cin >> n >> m;
    vector<ll> v(100001);
    for(ll i = 0 ; i < n ; ++i) {
        cin >> v[i];
    }
    ll l, r;
    int flag = 1, bflag;
    while(m--) {
        cin >> l >> r;
        l--; r--;
        if(l == 0 && r == 0 && n == 1) {
            cout << "Yes\n";
            continue;
        }
        else if(n == 1) {
            cout << "No\n";
            continue;
        }
        else if(n == 2 || r - l <= 1) {
            cout << "Yes\n";
            continue;
        }

        // flag = 1, 2 -> increasing or equal, decreasing
        if(v[l] > v[l + 1])
            flag = 2;
        else
            flag = 1;
        prev = v[l + 1];
        bflag = 0;
        cout << "{(" << l << ", " << r << "), ";
        if(r >= n)
            r = n - 1;
        cout << "(" << l << ", " << r << ")}\n";
        for(ll i = l + 2 ; i <= r ; ++i) {
            if(flag == 1 && prev <= v[i]) {
                prev = v[i];
            }
            else if(flag == 1) {
                flag = 2;
                prev = v[i];
            }
            else if(flag == 2 && prev > v[i]) {
                prev = v[i];
            }
            else if(flag == 2){
                cout << "No\n";
                bflag = 1;
                break;
            }
        }
        if(bflag)
            continue;
        else {
            cout << "Yes\n";
        }
    }
    return 0;
}

