#include<stdio.h>
int prime[10000],i,k;
int notprime[10000]={0},z=0,j;
void seive()
{

notprime[0]=1;
notprime[1]=1;	
		for(i=2;i<10000;i++)
		{
			if(notprime[i]==0)
			{
				prime[z++]=i;
				for(j=i+i;j<10000;j+=i)
					notprime[j]=1;
			}
		}
}
int main()
{
seive();
int n,tmp;
int t,flag,tmp2;
scanf("%d",&n);
while(n)
{
for(i=0;i<z;i++)
{
	if(prime[i]>=n)
		break;
}
tmp=i;
	flag=0;
	for(i=0;i<tmp;i++)
	{
		for(j=0;j<100;j++)
		{
			for(k=0;k<100;k++)
			{
				if(prime[i]>n)
				{
					flag=2;
					break;
				}
				if((prime[i]+prime[j]*prime[j]+prime[k]*prime[k]*prime[k])==n)
				{
					flag=1;
					break;
				}
			}
			if(flag==1||flag==2)
				break;
		}
		if(flag==1||flag==2)
			break;
	}
	if(flag==1)
		printf("%d %d %d\n",prime[i],prime[j],prime[k]);
	else
		printf("0 0 0\n");
	scanf("%d",&n);
}

	return 0;
}

