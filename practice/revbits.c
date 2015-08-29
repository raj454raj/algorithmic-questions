#include<stdio.h>
unsigned int revbits(unsigned int n) {
    int i = 0;
    unsigned int num = 0;
    int no_of_bits = sizeof(n) * 8;

    while(i < no_of_bits) {
        if(n & (1 << i)) {
            num |= 1 << ((no_of_bits - 1) - i);  
        }
        i++;
    }
    return num;
}
int main() {
    unsigned int n;
    scanf("%u", &n);
    printf("%u", revbits(n));
    return 0;
}
