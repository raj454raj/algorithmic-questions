#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int isprime(int n)
{
    if(n==2||n==3||n==5)
        return 0;
    int i,sq=sqrt(n);
    for(i=3;i<=sq;i+=2)
    {
        if(n%i==0&&n!=i)
            return 0;
    }
    return 1;
}
int check(int n)
{
    int n1=n;
    int n2=n;
    while(n1)
    {
        if(!isprime(n1))
            return 0;
        printf("%d",n1);
        n1/=10;
    }
    printf(" ");
    int k=0;
    while(1)
    {   
     
        if(n2%(int)pow(10,k)==n2)
        {
            if(!isprime(n2))
                return 0;
            break;
        }
        printf("%d",n2%(int)pow(10,k));
        if(!isprime(n2%(int)pow(10,k)))
            return 0;
        k++;
    }printf("\n");
    return 1;
}
int main()
{
    int n,i;
    long long int sum=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(check(i))
        {
            printf("%d\n",i);
            sum+=i;
        }
    }
    printf("%lld\n",sum);
    return 0;
}
