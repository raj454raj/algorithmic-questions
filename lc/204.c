#include<stdio.h>
int prime[1000002];
int seive(int n) {
    int i, j;
    int count = 0;
    for(i = 0 ; i <= n ; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(i = 2 ; i * i <= n ; i++) {
        if(prime[i]) {
            for(j = 2 ; i * j <= n ; j++) {
                prime[i * j] = 0;
            }
        }
    }
    for(i = 2 ; i < n ; i++)
        if(prime[i])
            count++;
    return count;
}

int main() {
    int n, i;
    scanf("%d", &n);
    printf("%d\n", seive(n));
    return 0;
}
