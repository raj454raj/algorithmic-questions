#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int n, k, x;
    cin >> n >> k;
    int count = 0;
    int req = n / k;
    int a[102] = {0};
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        a[x]++;
    }
    for(int i = 1 ; i <= k ; ++i) {
        if(a[i] > req)
            count += a[i] - req;
    }
    cout << count;
    return 0;
}

