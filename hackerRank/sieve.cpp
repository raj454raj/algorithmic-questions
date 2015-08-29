#include<iostream>
#include<stdio.h>
using namespace std;
long long int prime[100000]={0};
int i,j,z=0;
int notprime[1000000]={0};
void seive()
{
    notprime[0]=1;
    notprime[1]=1;
    for(i=2;i<1000000;i++)
    {
        if(notprime[i]==0)
        {
            prime[z++]=i;
            for(j=i+i;j<1000000;j+=i)
                notprime[j]=1;
        }
    }

}

int main()
{
    int n,t;
    scanf("%d",&t);
    seive();
    while(t--)
    {
        scanf("%d",&n);
        printf("%lld\n",prime[n-1]);
    }
    return 0;
}
