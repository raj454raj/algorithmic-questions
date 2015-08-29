#include<stdio.h>
#define MAX 10000000000
unsigned long long int power(unsigned long long int a, unsigned long long int b)
{
    if(b==0)
        return 1;
    else if(b==1)
        return a;
    else
    {
        unsigned long long int x=power(a,b/2)%MAX;
        if(b&1)
            return ((x*(x*a)%MAX))%MAX;
        else
            return (x*x)%MAX;
    }

}
int main()
{
    unsigned long long int i,n;
    unsigned long long int sum=0;
    scanf("%lld",&n);
    for(i=1;i<=n;++i)
    {
        sum = (sum+power(i,i))%MAX;
    }
    printf("%lld",sum);
    return 0;
}
