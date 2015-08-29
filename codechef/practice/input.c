#include<stdio.h>
int main()
{
	int n,k;
	int t;
	int count;
while(~(scanf("%d%d",&n,&k)))
{
	count=0;
	while(n--)
	{
		scanf("%d",&t);
		if((t)%k==0)
			count++;
	}
	printf("%d\n",count);
}
	return 0;
}
