#include<stdio.h>
int main()
{
	long long int a,b;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		if(a<b)
			printf("%lld %lld\n",b,a+b);
		else
			printf("%lld %lld\n",a,a+b);
	}
	return 0;
}
