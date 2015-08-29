#include<stdio.h>
int notprime[10001]={0};
int prime[10001];
int i,j,z=0;
void seive()
{
	notprime[0]=1;
	notprime[1]=1;
	for(i=2;i<10001;i++)
	{
		if(notprime[i]==0)
		{
			prime[z++]=i;
			for(j=i+i;j<10001;j+=i)
			{
				notprime[j]=1;
			}
		}
	}
}
int main()
{
	int m,n,t;
	scanf("%d",&t);
	for(i=0;i<50;i++)
		printf("%d ",prime[i]);
	while(t--)
	{
		scanf("%d%d",&m,&n);
			
	}
	return 0;
}
