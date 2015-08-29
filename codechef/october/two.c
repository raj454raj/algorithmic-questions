#include<stdio.h>
#include<math.h>
struct village
{
    int num, index;
};
typedef struct village village;
int absolute(int x)
{
    if(x>0)
        return x;
    return -x;
}
int main()
{
    village v1[100001], v2[100001];
    int i,t,z1,z2,n,x;
    long long int sum;
    scanf("%d",&t);
    while(t--)
    {
        z1=0;z2=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x>=0)
            {
                v1[z1++].num=x;
                v1[z1-1].index=i+1;
            }
            else
            {
                v2[z2++].num=x;
                v2[z2-1].index=i+1;
            }
        }
        sum=0;z2=0;
        for(i=0;i<z1;i++)
        {
            if(v1[i].num==0)
                continue;
            if(v1[i].num<=-v2[z2].num)
            {
                sum+=v1[i].num*absolute(v1[i].index-v2[z2].index);
//                printf("%d x %d(%d)",v1[i].num,(int)fabs(v1[i].index-v2[z2].index),v1[i].num*(int)fabs(v1[i].index-v2[z2].index));
  //              printf(" + ");
                v2[z2].num+=v1[i].num;
            }
            else
            {
                sum+=-v2[z2].num*absolute(v1[i].index-v2[z2].index);
    //            printf("%d x %d(%d)", -v2[z2].num,(int)fabs(v1[i].index-v2[z2].index),v1[i].num*(int)fabs(v1[i].index-v2[z2].index));
      //          printf(" + ");
                v1[i].num+=v2[z2].num;
                z2++;i--;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
