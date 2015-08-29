#include<stdio.h>
#define m 1000000007
unsigned long long int power(unsigned long long int n)
{
	if(n==0)
		return 1;
	if(n==1)
		return 2;
	else
	{
		unsigned long long int y=power(n/2);
		if(n&1)
			return (y*y*2)%m;
		else
			return (y*y)%m;
	}	
}
int main()
{
	int i,n,t,z;
	char str[20];
	unsigned long long int nbin,x;
	scanf("%d",&t);
	while(t--)
	{
		nbin=0;
		z=0;
		scanf("%d",&n);
		while(n)
		{
			str[z++]=n%2+'0';
			n/=2;
		}
		for(i=z-1;i>=0;i--)
			nbin=nbin*10+(str[i]-'0');
		//printf("%llu",nbin);
		x=power(nbin);
		x=(x*x)%m;
		printf("%llu\n",x);
	}

	return 0;
}
