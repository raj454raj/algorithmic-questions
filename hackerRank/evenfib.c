#include<stdio.h>
#define g getchar
long long int readnum()
{
    long long int n=0;
    char c=g();
    while(c<'0'||c>'9')c=g();
    while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
    return n;
}
long long int a[100]={0};
long long int fib(long long int n)
{
    if(n==0 || n==1)
    {
        a[n]=n;
        return a[n];
    }
    else if(a[n]!=0)
        return a[n];
    else
    {
        a[n]=fib(n-1)+fib(n-2);
        return a[n];
    }
}
long long int b[50],c[50];
int k=1;
int bsearch(long long int n)
{
    int beg=0,last=k-1,mid;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(b[mid]<n)
        {
            if(b[mid+1]>=n)
                return mid;
            else
                beg=mid+1;
        }
        else if(b[mid]>n)
            last=mid-1;
        else
            return mid;
    }
    return 0;
}
int main()
{
    long long int i,x,t,n;
    t=readnum();
    x=fib(87);
    c[0]=0;
    for(i=0;i<=87;i+=3)
    {
        b[k]=a[i];
        c[k]=c[k-1]+a[i];
        k++;
    }
    int ind;
    while(t--)
    {
        n=readnum();
        ind=bsearch(n);
        printf("%lld\n",c[ind]);
    }
    return 0;
}
