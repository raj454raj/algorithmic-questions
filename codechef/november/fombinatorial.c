#include<stdio.h>
#include<string.h>
long long int ar[1002][1002];
long long int t,n,m,q;
long long int power(long long int a, long long int b)
{
    if(ar[a][b])
        return ar[a][b];
    else if(b==0)
    {
        ar[a][b]=1;
        return 1;
    }
    else if(b==1)
    {
        ar[a][b]=a%m;
        return a%m;
    }
    else
    {
        long long int temp = power(a,b/2);
        if(b&1)
            return ((temp*temp)%m*a)%m;
        else
            return (temp*temp)%m;
    }
}
long long int f(long long int n)
{
    long long int i,pro=1;
    for(i=1;i<=n;i++)
    {
        pro=(pro*power(i,i))%m;
    }
    return pro;
}
long long int res(long long int n, long long int r)
{
    return (f(n)/f(r))/f(n-r);
}
int main()
{
    long long int r,tmp;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&n,&m,&q);
        memset(ar,0,n);
        while(q--)
        {
            scanf("%lld",&r);
            tmp=res(n,r);
            printf("%lld\n",tmp);
        }
    }
    return 0;
}
