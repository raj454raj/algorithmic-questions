#include<stdio.h>
int findPeakElement(int* nums, int numsSize) {
    int i;
    if(nums[0] > nums[1])
        return 0;
    for(i = 1 ; i < numsSize - 1 ; i++) {
        if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
            return i;
        }
    }
    if(nums[numsSize - 1] > nums[numsSize - 2])
        return numsSize - 1;
}

int main() {
    int ar[] = {1, 2, 3, 1};
    printf("%d", findPeakElement(ar, sizeof(ar) / sizeof(ar[0])));
    return 0;
}
