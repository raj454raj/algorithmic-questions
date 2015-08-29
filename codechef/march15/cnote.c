#include<stdio.h>
int main() {
    int pages_required, p, c, x, y, k, n, t, flag;
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d%d%d", &x, &y, &k, &n);
        pages_required = x - y;
        flag = 0;
        while(n--) {
            scanf("%d%d", &p, &c);
            if(p >= pages_required && c <= k) 
                flag = 1;
        }
        if(flag)
            printf("LuckyChef\n");
        else
            printf("UnluckyChef\n");
    }
    return 0;
}
