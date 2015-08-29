#include<stdio.h>
int subArraySum(int arr[], int n, int k)
{
    int curr_sum, i, j;
    int tempcount=0;
    for (i = 0; i < n; i++)
    {
        curr_sum = arr[i];
        for (j = i+1; j <= n; j++)
        {
            if (curr_sum%k==0)
                tempcount++;
            curr_sum = curr_sum + arr[j];
        }
    }
    return tempcount;
}
int main()
{
    int arr[50002];
    int i,n,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",subArraySum(arr, n, k));
    return 0;
}
