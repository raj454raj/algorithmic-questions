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
    int i,t,n,m,x,sum;
    t=readnum();
    while(t--)
    {
        n=readnum();
        m=readnum();
        sum=0;
        for(i=0;i<n;i++)
        {
            x=readnum();
            sum+=x;
        }
        if((sum+m)%n==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
