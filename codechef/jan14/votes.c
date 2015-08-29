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
            if(!b[i])
                zero++;
        }
        n-=zero;
        if(sum-n>=100||sum<100)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
