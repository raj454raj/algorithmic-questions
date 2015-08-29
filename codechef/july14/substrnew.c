#include<stdio.h>
int main()
{
	int t,n,i,j,count;
	char c;
	long long int ones;
	scanf("%d",&t);
	while(t--)
	{
		count=0;ones=0;
		scanf("%d%*c",&n);
		for(i=0;i<n;i++)
		{
			scanf("%c",&c);
			if(c=='1')
				ones++;
		}
		printf("%lld\n",(ones*ones+ones)/2);
	}
	return 0;
}
