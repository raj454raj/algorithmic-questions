#include<stdio.h>
int singleNumber(int *nums, int numsSize) {
    int i;
    int final = nums[0];
    for(i = 1 ; i < numsSize ; i++) {
        final ^= nums[i];
    } 
    return final;
}

int main()
{
    int arr[] = {4, 4, 2, 6, 5, 5, 2, 3, 3};
    int arr_size = sizeof(arr)/sizeof(arr[0]);  
    printf("%d" , singleNumber(arr, arr_size));
    return 0;
}
