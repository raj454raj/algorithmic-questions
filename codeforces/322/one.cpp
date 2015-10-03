#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n, x;
    ios_base::sync_with_stdio(0);
    cin >> n >> x;
    int m = min(n, x);
    cout << m << " ";
    cout << (max(n, x) - m) / 2;
    return 0;
}

