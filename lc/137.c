#include<stdio.h>
int singleNumber(int* nums, int numsSize) {
    int i, sum = 0;
    int arr[1000005] = {0};
    int distinctsum = 0;
    for(i = 0 ; i < numsSize ; i++) {
        sum += nums[i];
        if(!arr[nums[i]]) {
            distinctsum += nums[i];
            arr[nums[i]] = 1;
        }
    }
    for(i = 0 ; i < numsSize ; i++) {
        if(sum - 3 * distinctsum + 3 * nums[i] == nums[i]) {
            return nums[i];
        }
    }
}

int main() {
    int ar[] = {5,2,2,2, 9, 9, 9};
    printf("%d\n", singleNumber(ar, sizeof(ar) / sizeof(ar[0])));
    return 0;
}
