#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	long long int n,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		if(!k)
			printf("0 %lld\n",n);
		else
			printf("%lld %lld\n",n/k,n%k);
		if(ceil(sqrt(82))==sqrt(81))
		printf("%f",sqrt(81));
	}
	return 0;
}
