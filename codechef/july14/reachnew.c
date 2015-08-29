#include<stdio.h>
int main()
{
	int t;
	long long int x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&x,&y);
		if(!x && !y)
			printf("0\n");
		else if(y==0)
		{
			if(x>0)
			{
				if(x&1)
					printf("%lld\n",2*x-1);	
				else
					printf("%lld\n",2*x);	
			}
			if(x<0)
			{
				x=0-x;
				if(x&1)
					printf("%lld\n",2*x);
				else
					printf("%lld\n",2*x+1);
			}
		}
		else if(x==0)
		{
			if(y<0)
				y=0-y;
			if(y&1)
				printf("%lld\n",2*y-1);
			else
				printf("%lld\n",2*y);
		}
		else
		{
			if((x>0&&y>0)||(x>0&&y<0))
			{
				
			}
			if(x==y)
				printf("%lld\n",x+x);
			else if(x<y)
				printf("%lld\n",2*y);
			else
				printf("%lld\n",2*x+1);
		}
	}
	return 0;
}
