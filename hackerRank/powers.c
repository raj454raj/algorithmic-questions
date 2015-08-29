#include<stdio.h>
#define g getchar_unlocked
long long int MAX=10000000000;
long long int readnum()
{
    long long int n=0;
    char c=g();
    while(c<'0'||c>'9')c=g();
    while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
    return n;
}
long long int power(long long int a,long long int b)
{
    if(b==0)
        return 1;
    else if(b==1)
        return a;
    else
    {
        long long int x=power(a,b/2)%MAX;
        if(b&1)
            return (((x*x)%MAX)*a)%MAX;
        else
            return (x*x)%MAX;
    }
}
int main()
{
    long long int x,n,i;
    n=readnum();
    x=0;
    for(i=1;i<=n;i++)
    {
        printf("%lld --> %lld ",i,power(i,i));
        x=(x+power(i,i)%MAX)%MAX;
    }
    printf("\n%lld\n",x);
    return 0;
}
