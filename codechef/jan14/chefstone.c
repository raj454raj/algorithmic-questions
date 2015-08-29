#include<stdio.h>
#define g getchar_unlocked
long long int readnum()
{
    long long int n=0;
    char c=g();
    while(c<'0'||c>'9')c=g();
    while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
    return n;
}

int main()
{
    long long int t,k,n,i,tmp,pro,max;
    long int a[100002],b[100002];
    t=readnum();
    while(t--)
    {
        n=readnum();k=readnum();
        for(i=0;i<n;i++)
            a[i]=readnum();
        for(i=0;i<n;i++)
            b[i]=readnum();
        max=0;
        for(i=0;i<n;i++)
        {
            tmp=k/a[i];
            pro=tmp*b[i];
            if(pro>max)
                max=pro;
        }
        printf("%lld\n",max);
    }   
    return 0;
}
