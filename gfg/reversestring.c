#include<stdio.h>
void reverse(char *s) {
    if(*s) {
        reverse(s + 1);
        printf("%c", *s);
    }
}
int main() {
    char str[500];
    scanf("%s", str);
    reverse(str);
    printf("\n");
    return 0;
}
