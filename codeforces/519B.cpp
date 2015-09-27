#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n, x;
    scanf("%d", &n);
    ll sum = 0;
    for(int i = 0 ; i < n ; i++) {
        scanf("%d", &x);
        sum += x;
    }
    ll sum2 = 0;
    for(int i = 0 ; i < n - 1 ; i++) {
        scanf("%d", &x);
        sum2 += x;
    }
    cout << sum - sum2 << endl;
    sum = 0;
    for(int i = 0 ; i < n - 2 ; ++i) {
        scanf("%d", &x);
        sum += x;
    }
    cout << sum2 - sum;

    return 0;
}

