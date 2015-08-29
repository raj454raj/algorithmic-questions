#include<stdio.h>
int notprime[10001]={0};
int prime[10001];
int z=0,i,j;
int a[10001]={0};
void seive()
{
	notprime[0]=1;
	notprime[1]=1;
	for(i=2;i<10001;i++)
	{
		if(notprime[i]==0)
		{
			prime[z++]=i;
			for(j=2*i;j<10001;j+=i)
			{
				notprime[j]=1;
			}
		}
	}
}
int main()
{
	int n,t,tmp;
	scanf("%d",&t);
	seive();
	for(i=0;i<z;i++)
	{
		for(j=0;j<z;j++)
		{
		 tmp=prime[i]+2*prime[j];
			if(tmp<=10000)
				a[tmp]++;
			else
				break;
		}
	}
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",a[n]);
	}
	return 0;
}
