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
    int n, m;
    cin >> n >> m;
    vector<int> v(n), aux(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> v[i];
    }

    aux[n - 1] = -1;
    int prev = v[n - 1];
    int ind = n;
    for(int i = n - 2 ; i >= 0 ; --i) {
        if(v[i] != prev) {
            aux[i] = ind;
            prev = v[i];
        }
        else {
            aux[i] = aux[ind - 1];
        }
        ind = i + 1;
    }
    /*
    for(int i = 0 ; i < n ; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i = 0 ; i < n ; ++i) {
        cout << aux[i] << " ";
    }
    */
    int l, r, x;
    while(m--) {
        cin >> l >> r >> x;
        l--; r--;
        if(v[l] != x)
            cout << l + 1 << endl;
        else {
            if(aux[l] != -1 && aux[l] <= r + 1)
                cout << aux[l] << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}

