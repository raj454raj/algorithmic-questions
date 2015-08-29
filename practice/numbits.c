#include<stdio.h>
int num1bits(int n) {
    int count = 0;
    int i = 0;
    while(i < 32) {
        if(n & (1 << i))
            count++;
        i++;
    }
    return count;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", num1bits(n));
    return 0;
}
