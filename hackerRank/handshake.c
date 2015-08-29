#include<stdio.h>
int main() {
    long long int tmp, t, n;
    scanf("%lld", &t);
    while(t--) {
        scanf("%lld", &n);
        tmp = n * (n - 1) / 2;
        printf("%lld\n", tmp);
    }
    return 0;
}
