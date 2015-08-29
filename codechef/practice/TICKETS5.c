#include<stdio.h>
int main() {
    int t, i, flag;
    char A, B, str[1000000];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", str);
        A = str[0];
        B = str[1];
        flag = 1;
        if(A == B) {
            printf("NO\n");
            continue;
        }

        for(i = 2 ; str[i] ; i++) {
            if(i&1 && str[i] == B);
            else if(!(i&1) && str[i] == A);
            else {
                printf("NO\n");
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("YES\n");
    }
    return 0;
}
