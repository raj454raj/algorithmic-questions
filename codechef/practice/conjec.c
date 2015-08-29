#include <stdio.h>

int P[200];
int np[1000]={0};
int z=0;
void seive()
{
	np[0]=1;
	np[1]=1;
int i,j;
	for(i=2;i<1000;i++)
	{
		if(np[i]==0)
		{
			P[z++]=i;
			for(j=i+i;j<1000;j+=i)
				np[j]=1;
		}
	}

}
int isprime(int n)
{

	if(n<2)
		return 0;
	if(n==2||n==3||n==5)
		return 1;
	int i=3;
	if(n%2==0)
		return 0;
	while (i*i<=n)	
	{
		if (n%i==0)
			return 0;
		i+=2;
	}
	return 1;
}


int main()	
{
	int n;
	seive();
	int i,j,k,p2,p3,flag;
	scanf("%d",&n);
	while (n)
	{
		flag=0;
		for(i=0;P[i]*P[i]*P[i]<n && i<z;i++)	
		{
			p3=P[i]*P[i]*P[i];
			for(j=0;P[j]*P[j]<=n-p3&&j<z;j++)	
			{
				p2=P[j]*P[j];
				k=n-p2-p3;
				if (isprime(k)==1)
				{
					printf("%d %d %d\n", k,P[j],P[i]);
					flag=1;
					break;
				}	
			}
		if(flag==1)
			break;
		}	
		if(flag==0)
			printf("0 0 0\n");
	scanf("%d",&n);
	}	
	return 0;
}	
