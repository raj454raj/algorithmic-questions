#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i];
    }
    int empty = 2 * k - n;
    int m = 0, i;
    for(i = n - 1 ; i >= 0 ; --i) {
        if(!empty) break;
        m = max(m, a[i]);
        empty--;
    }
    int start = 0, end = i;
    while(start < end) {
        m = max(m, a[start] + a[end]);
        start++;
        end--;
    }
    cout << m;
    return 0;
}

