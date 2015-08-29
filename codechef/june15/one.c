#include<stdio.h>
int main() {
    long long int t, n, i, x, prev, sum;
    scanf("%lld", &t);
    while(t--) {
        scanf("%lld", &n);
        prev = 0;
        sum = 0;
        for(i = 0 ; i < n ; i++) {
            scanf("%lld", &x);
            if(x > prev) {
                sum += x - prev;
                prev = x;
            }
            else 
                prev = x;
        }
        printf("%lld\n", sum);

    }
    return 0;
}
