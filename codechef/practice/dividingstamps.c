#include<stdio.h>
int main()
{
	long long int n,i;
	long long int sum,x;

	scanf("%lld",&n);
	sum = n*(n+1)/2;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&x);
		sum-=x;
	}
	if(!sum)
		printf("YES");
	else 
		printf("NO");
	return 0;
}
