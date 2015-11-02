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
#define eps 0.00001
int main() {
    ios_base::sync_with_stdio(0);
    ll t, n;
    int x, y;
    cin >> t;
    pair<int, int> a;
    pair<int, int> b;
    a.first = a.second = b.first = b.second = 0;
    while(t--) {
        cin >> n >> x >> y;
        if(n == 1) {
            a.first += x;
            a.second += y;
        }
        else {
            b.first += x;
            b.second += y;
        }
    }
    double effa = a.first * 1.0 / (a.first + a.second);
    double half = 0.5;
    if(abs(effa - half) < eps || (effa - half) > 0) {
        cout << "LIVE\n";
    }
    else
        cout << "DEAD\n";
    effa = b.first * 1.0 / (b.first + b.second);
    if(abs(effa - half) < eps || (effa - half) > 0) {
        cout << "LIVE\n";
    }
    else
        cout << "DEAD\n";


    return 0;
}

