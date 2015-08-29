#include<stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
    int i;
    for(i = 0 ; i < numsSize ; i++) {
        if(nums[i] >= target)
            return i;
    }
    return numsSize;
}
int main() {
    int ar[] = {1,3,4,5,6};
    printf("%d", searchInsert(ar, 5, 1));
    return 0;
}
