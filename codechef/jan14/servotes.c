#include<stdio.h>
#define g getchar_unlocked
int readnum()
{
    int n=0;
    char c=g();
    while(c<'0'||c>'9')c=g();
    while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
    return n;
}
int main()
{
    int diff,t,n,b[10005],i,sum,div,flag,zero;
    double tmp;
    t=readnum();
    while(t--)
    {
        sum=0;
        zero=0;
        n=readnum();
        for(i=0;i<n;i++)
        {
            b[i]=readnum();
            sum+=b[i];
            if(!b[i]&&!zero)
                zero=1;
        }
        if(sum==100)
            printf("YES\n");
        else if(sum-n>=100||sum<100)
            printf("NO\n");
        else
        {
            flag=0;
            diff=sum-100;
            for(i=2;;i++)
            {
                div=n/i;
                if(div==0)
                    break;
                if(diff==div)
                {
                    tmp=(double)n/(double)i;
                    if(tmp==div && zero)
                        flag=0;
                    else
                        flag=1;
                    break;
                }
            }
            if(flag)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
