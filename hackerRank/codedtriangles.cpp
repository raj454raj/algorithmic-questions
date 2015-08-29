#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long long int i,sq,ans,n,t;
    int flag;
    long double tmp;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&ans);
        ans*=2;
        sq=sqrt(ans);
        flag=0;
        tmp=(-1+sqrt(1+4*ans))/2.0;
        if(tmp==ceil(tmp))
            printf("%lld\n",(long long int)tmp);
        else
            printf("-1\n");
        /*for(i=sq;i>=2;i--)
        {
            if(ans%i==0 && ans!=i)
            {
                printf("%lld %lld\n",i,ans/i);
                if(fabs(ans/i-i)==1)
                {
                    flag=1;
                    break;
                }
            }

        }
        if(flag)
            printf("%lld\n",i);
        else
            printf("-1\n");*/
    }
    return 0;
}
