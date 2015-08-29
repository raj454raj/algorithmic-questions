#include<stdio.h>
#include<math.h>
int main()
{
	int sq,n,t,tmp,i;
	scanf("%d",&t);
	while(t--)
	{
		tmp=0;
		scanf("%d",&n);
		while(1)
		{
			sq=sqrt(n);
			if(n==1)
			{
				tmp=1;
				break;
			}
			if(n==2||n==0)
			{
				tmp=0;
				break;
			}
			for(i=1;i<=sq;i++)
			{
				if(n%i==0)
				{
					tmp^=1;
					n-=i;
				break;
				}
			}
		}
		if(tmp==1)
			printf("BOB\n");
		else
			printf("ALICE\n");

	}
	return 0;
}
