#include<stdio.h>
#include<stdlib.h>
char *convertToTitle(int n) {
    char str[100000];
    int k = 0, i;
    while(n) {
        str[k++] = (n - 1) % 26 + 'A';
        n = (n - 1) / 26;
    }
    char *tmp = (char *)malloc((k + 1) * sizeof(char));
    for(i = 0 ; i < k ; i++) {
        tmp[i] = str[k - i - 1];
    }
    return tmp;
}
int main() {
    int n = 52;
    scanf("%d", &n);
    printf("%s", convertToTitle(n));
    return 0;
}
