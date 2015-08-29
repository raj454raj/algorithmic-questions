#include<stdio.h>
int singleNumber(int* nums, int numsSize) {
    int i, ones = 0, twos = 0;
    int common_bit_mask;
    for(i = 0 ; i < numsSize ; i++) {
        twos  = twos | (ones & nums[i]);
        ones  = ones ^ nums[i];
        common_bit_mask = ~(ones & twos);
        ones &= common_bit_mask;
        twos &= common_bit_mask;
    }
    return ones;
}

int main() {
    int ar[] = {5, 2, 2, 2, 9, 9, 9};
    printf("%d\n", singleNumber(ar, sizeof(ar) / sizeof(ar[0])));
    return 0;
}
