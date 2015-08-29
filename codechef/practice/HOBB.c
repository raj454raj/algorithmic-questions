#include<stdio.h>
int compare(const void *a, const void *b) {
    return *(int *)a > *(int *)b;
}
int main() {
    int i, t, n, prev, sum;
    int a[5005];
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(i = 0 ; i < n ; i++) {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), compare);
        prev = a[0];
        sum = a[0] + 1;
        for(i = 1 ; i < n ; i++) {
            if(a[i] != prev) {
                sum += a[i] + 1;
                prev = a[i];
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
