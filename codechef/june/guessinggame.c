#include<stdio.h>
int main()
{
	int t;
	long long int n,m,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		if(n&1 && m&1)
		{
			p = m*n;
			printf("%lld/%lld\n",(p)/2,p);
		}
		else
			printf("1/2\n");
	}
}
