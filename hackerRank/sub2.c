#include<stdio.h>
int subArraySum(int arr[], int n, int sum)
{
    /* Initialize curr_sum as value of first element
       and starting point as 0 */
    int curr_sum = arr[0], i;
    int tempcount=0,start=0;
    /* Add elements one by one to curr_sum and if the curr_sum exceeds the
       sum, then remove starting element */
    for (i = 1; i <= n; i++)
    {
        while (curr_sum > sum && start < i-1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }
        if (curr_sum%sum==0)
        {
            tempcount++;
        }
        curr_sum = curr_sum + arr[i];
    }

    return tempcount;
}

// Driver program to test above function
int main()
{
    int arr[] = {13,18,9,9,13,10,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d",subArraySum(arr, n, 2));
    return 0;
}
