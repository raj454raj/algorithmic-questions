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
int gcd(int n, int m)
{
    if(m<=n && n%m==0)
        return m;
    if(n<m)
        return gcd(m,n);
    else
        return gcd(m,n%m);
}
int main()
{
    int flag,n,q,t,l,r,i,count;
    t=readnum();
    int a[100010];
    while(t--)
    {
        int g=1;
        n=readnum();
        q=readnum();
        for(i=1;i<=n;i++)
            a[i]=readnum();
        
        while(q--)
        {
            l=readnum();
            r=readnum();
            printf("%d\n",g);
        }
    }
    return 0;
}
