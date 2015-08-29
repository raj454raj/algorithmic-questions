#include<stdio.h>
int main()
{
	int t,N,a,b,c,A,B,C,i,j,k;
	int count=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&N,&A,&B,&C);
		a=0;
		b=0;
		c=0;
		count=0;
		for(i=0;i<=A;i++)
		{	
			for(j=0;j<=B;j++)
			{
				for(k=0;k<=C&&count!=N;k++)
				{
//					if(count==N)
//						goto lb1;
					count+=i+j+k;
				}
			}
		}
//lb1:
		for(i=0;i<=C;i++)
		{
			for(j=0;j<=B;j++)
			{
				for(k=0;k<=A;k++)
				{
//					if(count==N)
//						goto lb2;
					count+=i+j+k;
				}
			}
		}
//lb2:

		for(i=0;i<=B;i++)
		{
			for(j=0;j<=A;j++)
			{
				for(k=0;k<=C&&count!=N;k++)
				{
//					if(count==N)
//						goto lb3;
					count+=i+j+k;
				}
			}
		}
//lb3:

		printf("%d",count);
	}
	return 0;
}
