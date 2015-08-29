#include<stdio.h>
#include<stdlib.h>
int comp(const void *a, const void *b)
{
    return *(int *)a-*(int *)b;
}
int main()
{
    int n,a[10]={5,2,3,4,1,2,3,6,8,7};
    int t,sum;
    scanf("%d",&t);
    printf("5 2 3 4 1 2 3 6 8 7\n");
    qsort(a,10,sizeof(int),comp);
    while(t--)
    {
        scanf("%d",&sum);
        int beg=0,last=9,flag=0;
        while(beg<last)
        {
            if(a[beg]+a[last]==sum)
            {
                flag=1;
                break;
            }
            else if(a[beg]+a[last]<sum)
                beg++;
            else
                last--;
        }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
