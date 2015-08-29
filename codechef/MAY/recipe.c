#include<stdio.h>
int main() {
    int n, t, i, x, flag;
    int a[100002];
    int sum;
    int min;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        min = 100000;
        flag = 0;
        sum = 0;
        for(i = 0 ; i < n ; i++) {
            scanf("%d", &a[i]);
            sum += a[i];
            if(a[i] < 2)
                flag = 1;
            if(!flag) {
                if(a[i] < min)
                    min = a[i];
            }
        }
        sum = sum - min + 2;
        if(!flag)
            printf("%d\n", sum);
        else
            printf("-1\n");
    }
    return 0;
}
