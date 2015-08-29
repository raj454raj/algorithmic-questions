#include<stdio.h>
int reverse(int x) {
    char str[60];
    int N = x, i, negative = 1;
    if(N < 0) {
        negative = -1;
        N = -N;
    }
    if(N == 0)
        return 0;
    int k = 0;
    while(N) {
        str[k++] = (char)(N % 10 + '0');
        N /= 10;
    }
    str[k] = '\0';
    N = 0;
    int prev;
    for(i = 0 ; i < k ; i++) {
        if((N * 10 + str[i] - '0') < N)
            return 0;
        if(N < 0)
            return 0;
        prev = N;
        N = N * 10;
        if(N != 0 && N / 10 != prev)
            return 0;
        N += (str[i] - '0');
    }
    return negative * N;
}

int main() {
    int n = 1326;
    scanf("%d", &n);
    printf("%d\n", reverse(n));
    return 0;
}

