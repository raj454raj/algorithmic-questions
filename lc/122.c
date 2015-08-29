#include<stdint.h>
#include<stdio.h>
int hammingWeight(uint32_t n) {
    int count = 0;
    while (n) {
        n &= (n-1) ;
        count++;
    }
    return count;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", hammingWeight(n));
    return 0;
}
