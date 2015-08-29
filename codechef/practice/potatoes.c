#include<stdio.h>
int isprime(int n)
{
	if(n==2||n==3||n==5)
		return 1;
	else if(n%2==0)
		return 0;
	else
	{
		int i;
		for(i=3;i*i<=n;i++)
		{
			if(n%i==0)
				return 0;
		}
		return 1;
	}
}
int main()
{
	int x,y,t,i,z;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		z=x+y+1;
		for(i=z;i<=2003;i++)
		{
			if(isprime(i))
				break;
		}
		printf("%d\n",i-z+1);
	}
	return 0;
}
