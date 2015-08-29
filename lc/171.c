#include<stdio.h>
int titleToNumber(char *s) {
    int i, sum = 0;
    for(i = 0 ; s[i] ; i++) {
        sum = sum * 26 + s[i] - 'A' + 1;
    }
    return sum;
}

int main() {
    char str[50];
    scanf("%s", str);
    printf("%d\n", titleToNumber(str));
    return 0;
}
