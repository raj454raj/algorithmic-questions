#include<stdio.h>
int main() {
    long long int x, t,a,tmp,i, b,c, k;
    scanf("%lld", &t);
    while(t--) {
        scanf("%lld%lld%lld%lld", &a, &b, &c, &k);
        x = -b / 2 / a;
        for(i = x ; i < 10000000000 ; i++) {
            tmp = a * i * i + b * i + c;
            if(tmp >= k)
                break;
        }
        printf("%lld\n", i);
    }
    return 0;
}
