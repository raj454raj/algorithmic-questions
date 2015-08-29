#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,i,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&n);
		for(i=1;pow(5,i)<=n;i++)
		{
			sum+=n/(pow(5,i));
		}
		printf("%d\n",sum);
	}
return 0;
}
