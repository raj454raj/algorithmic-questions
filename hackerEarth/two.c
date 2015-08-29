#include<stdio.h>
int main() {
    long long int t, n, q;
    scanf("%lld", &q);
    while(q--) {
        scanf("%lld%lld", &n, &t);
        while(t--) {
                n = n / 2;
                n = n - n / 4;
        }
        printf("%lld\n", n);
    }
    return 0;
}
