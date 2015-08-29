#include<stdio.h>
int findcandidate(int a[],int n)
{
    int i,ind=0,count=1;
    for(i=1;i<n;i++)
    {
        if(a[ind]==a[i])
            count++;
        else
            count--;
        if(count==n/2)
            return a[i];
    }
    return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[100];
    for(i=0;i<2*n;i++)
        scanf("%d",&a[i]);
    int cand=findcandidate(a, 2*n);
    printf("%d\n",cand);
    return 0;
}
