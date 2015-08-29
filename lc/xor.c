#include<stdio.h>
int main() {
    int t, n, i, count, xor;
    int a[100002];
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        xor = 0;
        for(i = 0 ; i < n ; i++) {
            scanf("%d", &a[i]);
            xor ^= a[i];
        }
        count = 0;
        for(i = 0 ;i < n ;i++) {
            if(a[i]^xor == 0)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
