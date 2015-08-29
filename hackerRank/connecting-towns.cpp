#include<bits/stdc++.h>
#define MOD 1234567
using namespace std;
int main() {
    int t, n, a[1000], x;
    long long int pro;
    scanf("%d", &t);
    while(t--) {
        pro = 1;
        scanf("%d", &n);
        n--;
        while(n--) {
            scanf("%d", &x);
            pro = (pro * x) % MOD;
        }
        printf("%lld\n", pro);
    }
    return 0;
}
