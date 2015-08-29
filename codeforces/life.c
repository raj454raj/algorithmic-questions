#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a)<(*(int *)b);
}
int main()
{
    int i,n,k,a[10001];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int sum=0;
    qsort(a,n,sizeof(int),compare);
    for(i=0;i<n;i+=k)
    {
        sum+=(a[i]-1)*2;
    }
    printf("%d\n",sum);
    return 0;
}
