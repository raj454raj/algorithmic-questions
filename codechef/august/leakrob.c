#include<stdio.h>
#include<math.h>
#define g getchar_unlocked
int main()
{
	int t,x,y;
	//t=readnum();
	scanf("%d",&t);
	int count=0;
	while(t--)
	{
		scanf("%d%d",&x,&y);
		if(x>0)
		{
			if(x&1)
			{
				if(y<=x+1&&y>=1-x||!(y&1))
					printf("YES\n");
				else
					printf("NO\n");
			}
			else
			{
				if(y<0)
				{
					if(y&1)
						printf("NO\n");
					else if((-y)>=x)
						printf("YES\n");
					else
						printf("NO\n");
				}
				else
				{	
					if(y&1)
						printf("NO\n");
					else if(y>=x+2)
						printf("YES\n");
					else
						printf("NO\n");
				}
			}
		}
		else if(x<0)
		{
			if(x&1)
			{
				if(y&1||y==0)
					printf("NO\n");
				else if(abs(y)>=abs(x)+1)
					printf("YES\n");
				else
					printf("NO\n");

			}
			else
			{
				if(y>=x&&y<=-x||!(y&1))
					printf("YES\n");
				else
					printf("NO\n");
			}
		}
		else
		{
			if(y&1)
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return 0;
}
