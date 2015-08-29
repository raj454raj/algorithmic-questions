#include<stdio.h>
int subArraySum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], start = 0, i;
    for (i = 1; i <= n; i++)
    {
        while (curr_sum > sum && start < i-1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }
        if (curr_sum == sum)
            return 1;
        if (i < n)
            curr_sum = curr_sum + arr[i];
    }
    return 0;
}

int main()
{
    int arr[1000005];
    int t, n, x, i;
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d", &n, &x);
        for(i = 0 ; i <  n ; i++)
            scanf("%d", &arr[i]);
        if(subArraySum(arr, n, x))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
