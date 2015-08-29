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
    int flag,n,g,q,t,l,r,i,count;
    int L[100010],R[100010];
    t=readnum();
    int a[100010];
    while(t--)
    {
        n=readnum();
        q=readnum();
        for(i=1;i<=n;i++)
            a[i]=readnum();
        L[1]=a[1];
        for(i=2;i<=n;i++)
            L[i]=gcd(L[i-1],a[i]);
        R[n]=a[n];
        for(i=n-1;i>=1;i--)
            R[i]=gcd(R[i+1],a[i]);
        while(q--)
        {
            l=readnum();
            r=readnum();
            if(r==1 || l==n)
            {
                if(r==1)
                    g=R[2];
                if(l==n)
                    g=L[n-1];
            }
            else
            {
                if(l-1<1)
                    g=R[r+1];
                else if(r+1>n)
                    g=L[l-1];
                else
                    g=gcd(L[l-1],R[r+1]);
            }
            printf("%d\n",g);
        }
    }
    return 0;
}
