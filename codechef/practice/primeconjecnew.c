#include<stdio.h>
int prime[150],i,j,z=0;
int notprime[350]={0};
void seive()
{
	notprime[0]=1;
	notprime[1]=1;
	for(i=2;i<350;i++)
	{	
		if(notprime[i]==0)
		{
			prime[z++]=i;
			for(j=i+i;j<350;j+=i)
				notprime[j]=1;
		}

	}
}
int isprimeno(int n)
{
	if(n==1)
		return 0;
	else if(n==2||n==3||n==5)
		return 1;
	else if(n%2==0)
		return 0;
	for(i=3;i*i<=n;i+=2)
	{
		if(n%i==0)
			return 0;
	}
return 1;
}
int main()
{
	seive();
	int flag,n,x,p3,p2;
	scanf("%d",&n);
	printf("%d",isprimeno(81));
	while(n)
	{
		flag=0;
		for(i=0;prime[i]*prime[i]*prime[i]<n && i<z;i++)
		{
			p3=prime[i]*prime[i]*prime[i];
			for(j=0;prime[j]*prime[j]<=n && j<z;j++)
			{
				p2=prime[j]*prime[j];
				x=n-p3-p2;
				if(isprimeno(x)==1 && x>0)
				{
					flag=1;
					printf("%d %d %d\n",x,prime[j],prime[i]);
					goto lb;
				}
			}
		}
		if(flag==0)
			printf("0 0 0\n");
		lb:
		scanf("%d",&n);
	}
	return 0;
}
