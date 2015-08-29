#include<stdio.h>
int main()
{
	long long int n,i;
	for(i=0;i<=10000000;i++)
	{
		if(i*i==i*(i+1)/2&&i*i==(3*i*i-i)/2)
			printf("%lld",i);
	}
}
