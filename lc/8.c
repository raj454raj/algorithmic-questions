#include<stdio.h>
int atoi(char *str) {
    int prev, i, start = 0, sign = 1;
    char tmp;
    int l = strlen(str);
    int k = 0;
    while(str[k] == ' ') k++;
    start = k;
    if(str[start] == '-') {
        sign = -1;
        start = k + 1;
    }
    else if(str[start] == '+') {
        sign = 1;
        start = k + 1;
    }
    int sum = 0;
    for(i = start ; str[i] ; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            prev = sum;
            sum = sum * 10 + str[i] - '0';
            if(sum < prev) {
                if(sign == 1)
                    return 2147483647;
                else
                    return -2147483648;
            }
        }
        else if(str[i] == ' ')
            break;
        else
            break;
    }
    return sign * sum;
}

int main() {
    char str[50];
    scanf("%s", str);
    printf("%d", atoi(str));
    return 0;
}
