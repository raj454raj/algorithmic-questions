#include<stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int i;
    for(i = 1 ; i * i <= x ; i++) {
        ;
    }
    printf("%d\n", i - 1);
    return 0;
}
