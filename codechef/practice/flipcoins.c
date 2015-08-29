#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c;
	int n,qu;
	scanf("%d%d",&n,&qu);
	int *a=(int *)malloc(n*sizeof(int));
	int p,q,i,A,B,j,count;
	for(i=0;i<qu;i++)
	{
		scanf("%d%d%d",&c,&A,&B);
		if(c==1&&(B<p||A>q))
		{
			printf("%d\n",count);
			continue;
		}
		switch(c)
		{
			case 0:
				{
					for(j=A;j<=B;j++)
					{
						a[j]^=1;
					}
					p=A;q=B;
					break;
				}
			case 1:
				{
				count=0;
					for(j=A;j<=B;j++)
					{
						if(a[j]==1)
							count++;
					}
					printf("%d\n",count);
				p=A;q=B;
					break;
				}
		}
	}		
	return 0;
}
