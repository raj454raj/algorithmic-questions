#include<stdio.h>
#define g getchar_unlocked
long long int readnum()
{
    char c=g();
    long long int n=0;
    while(c<'0'||c>'9')c=g();
    while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
    return n;
}
int main()
{
    long long int tmp,n,k,t;
    t=readnum();
    while(t--)
    {
        n=readnum();
        k=readnum();
        tmp=((n-k)*(n-k-1)*k)/2+((n-k)*(n-k-1)*(n-k-2))/6+((n-k)*k*(k-1))/2;
        printf("%lld\n",tmp);
    }
    return 0;
}
