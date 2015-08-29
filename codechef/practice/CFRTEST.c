#include<stdio.h>
int main() {
    int i, t, n, max, count;
    int a[52];
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        int temp[103] = {0};
        max = 0;
        for(i = 0 ; i < n ; i++) {
            scanf("%d", &a[i]);
            temp[a[i]] = 1;
            if(a[i] > max)
                max = a[i];
        }
        count = 0;
        for(i = 0 ; i <= max ; i++) {
            if(temp[i])
                count++;
        }
        
        printf("%d\n", count);
    }
    return 0;
}
