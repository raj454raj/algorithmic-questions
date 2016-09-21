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

int fval[100004] = {-1};
int x[100004] = {-1};
int p[100004] = {0};
int a, b;
int f(int i) {
    if(fval[i] != -1) {
        return fval[i];
    }
    else {
        fval[i] = a * f(i - 2) + b * f(i - 1);
        return fval[i];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, q, f1, f2, a, b;
    cin >> n >> q >> f1 >> f2 >> a >> b;
    fval[1] = f1;
    fval[2] = f2;
    for(int i = 1 ; i <= n ; i++) {
        cin >> x[i];
    }
    int l, r, v;
    while(q--) {
        cin >> l >> r;
        v = f(i - l + 1);
        p[l] += v;
        p[r + 1] -= v;
    }
    for(int i = 2 ; i <= n ; i++)
        p[i] += p[i - 1];

    for(int i = 1 ; i <= n ; i++) {
        cout << x[i] + p[i] << " ";
    }
    return 0;
}

