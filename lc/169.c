#include<stdio.h>
#include<stdbool.h>

int majorityElement(int* nums, int numsSize) {
    int maj_index = 0, count = 1;
    int i;
    for(i = 1; i < numsSize; i++)
    {
        if(nums[maj_index] == nums[i])
            count++;
        else
            count--;
        if(count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    return nums[maj_index];
}

int main() {
    int a[] = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3};
    printf("%d\n", majorityElement(a, sizeof(a) / sizeof(a[0])));
    return 0;
}
