#include<stdio.h>
int main() {
    char str[500];
    int i, t, k;
    char prev;
    char s[500];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", str);
        prev = str[0];
        k = 0;
        s[k++] = prev;
        for(i = 1 ; str[i] ; i++) {
            if(str[i] != prev) {
                prev = str[i];
                s[k++] = prev;
            }
        }
        s[k] = '\0';
        printf("%s\n", s);
    }
    return 0;
}
