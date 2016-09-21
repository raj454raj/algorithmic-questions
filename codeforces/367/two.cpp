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
    cin.tie(NULL);
    int n, q, x;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        v[i] = x;
    }
    sort(v.begin(), v.end());

    cin >> q;
    int tmp;
    vector<int>::iterator it;
    while(q--) {
        cin >> x;
        it = upper_bound(v.begin(), v.end(), x);
        tmp = it - v.begin();
        cout << tmp << endl;
    }
    return 0;
}

