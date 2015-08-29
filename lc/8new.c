#include<stdio.h>
int atoi(char *str) {
    long long int n = 0;
    int i, negative = 0;
    int k = 0;

    while(str[k] == ' ') k++;
    if(str[k] == '-') {
        negative = 1;
        k++;
    }
    else if(str[k] == '+')
        k++;

    for(i = k ; str[i] ; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            n = 10 * n + str[i] - '0';
            if(n >= 2147483648 && negative)
                n = 2147483648;
            else if(n >= 2147483647)
                n = 2147483647;
        }
        else
            break;
    }
    if(negative == 1)
        n = -n;
    return (int)n;
}

int main() {
    char str[50];
    scanf("%s", str);
    printf("%d", atoi(str));
    return 0;
}
