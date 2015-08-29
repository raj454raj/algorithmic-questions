#include<iostream>
#include<stdio.h>
using namespace std;
int bin_search(int x, int *sum, int high)
{
    int low=0,mid;
    while(low <= high)
    {
        mid = (low+high)/2;
        if(mid == 0 && sum[mid] >= x)
            break;
        else if(mid != 0 && (sum[mid] >= x && sum[mid-1] < x))
            break;
        else if(sum[mid] > x && sum[mid-1] >= x)
            high = mid-1;
        else if(sum[mid] < x)
            low = mid+1;
    }
    return mid+1;
}
int main()
{
    int n,m,i,A[100005],sum[100005],q,x;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&A[i]);
        if(i == 0)
            sum[i] = A[i];
        else
            sum[i] = A[i] + sum[i-1];
    }
    scanf("%d",&m);
    for(i=0;i<m;++i)
    {
        scanf("%d",&q);
        x = bin_search(q, sum, n);
        printf("%d\n",x);
    }
    return 0;
}

