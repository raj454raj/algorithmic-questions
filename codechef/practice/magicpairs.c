#include<stdio.h>
int main()
{
	int i,x,t;
	long long int tmp,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			scanf("%d",&x);
		if(n==1)
		{
			printf("0\n");
			continue;
		}
		tmp=(n*(n-1))/2;
		printf("%lld\n",tmp);
	}
	return 0;
}
