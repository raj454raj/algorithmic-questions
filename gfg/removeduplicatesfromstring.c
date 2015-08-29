#include<stdio.h>
void removeDuplicates(char *s) {
    int i;
    int a[256] = {0};
    int max_index = 0;
    for(i = 0 ; s[i] ; i++) {
        if(a[s[i]] == 0) {
            a[s[i]] = 1;
            s[max_index++] = s[i];
        }
    }
    s[max_index] = '\0';
}
int main() {
    char str[500];
    scanf("%s", str);
    removeDuplicates(str);
    printf("%s", str);
    return 0;
}
