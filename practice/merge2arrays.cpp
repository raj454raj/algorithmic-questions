#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> mergesorted(vector<int>& a, vector<int>& b) {
    int m = b.size(), n = a.size();
    vector<int> c(m + n);
    int i = 0, j = 0, k = 0;
    while(k < m + n) {
        if(j == m || (i < n && a[i] < b[j])) {
            c[k++] = a[i++];
        }
        else {
            c[k++] = b[j++];
        }
    }
    return c;
}

int main() {
    ios_base::sync_with_stdio(0);
    ll n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; ++i) {
        cin >> b[i];
    }
    vector<int> v = mergesorted(a, b);
    for(int i = 0 ; i < v.size() ; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}
