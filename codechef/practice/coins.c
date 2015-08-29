#include<stdio.h>
#include<stdlib.h>
unsigned long long int a[1000000];
unsigned long long int coin(unsigned long long int n)
{
	if(n<=11)
		return n;
	else if(n<1000000&&a[n])
		return a[n];
	else
	{
		unsigned long long int tmp=coin(n/2)+coin(n/3)+coin(n/4);
		if(n<1000000)
			return a[n]=tmp;
		return tmp;
	}
}
int main()
{

	unsigned long long int n,i,final;

	while(~scanf("%llu",&n))
	{
		final=coin(n);
		printf("%llu\n",final);
	}

	return 0;
}
