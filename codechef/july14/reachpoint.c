#include<stdio.h>
#define g getchar_unlocked
long long int readnum()
{
	long long int num=0;
	char c=g();
	while(c<'0'||c>'9')c=g();
	while(c>='0'&&c<='9')
	{
		num=num*10+c-'0';
		c=g();
	}
	return num;
}
int main()
{
	long long int t,x,y,twox,twoy;
	//scanf("%lld",&t);
	t=readnum();
	while(t--)
	{
		//scanf("%lld%lld",&x,&y);
		x=readnum();
		y=readnum();
		if(x<0)
			twox=-(x<<1);
		if(y<0)
			twoy=-(y<<1);
		if(x>0)
			twox=x<<1;
		if(y>0)
			twoy=y<<1;
		if(!x && !y)
			printf("0\n");
		else if(y==0)
		{
			if(x<0)
				x=0-x;
				if(x&1)
					printf("%lld\n",twox+1);	
				else
					printf("%lld\n",twox);	
		}
		else if(x==0)
		{
			if(y<0)
				y=0-y;
			if(y&1)
				printf("%lld\n",twoy-1);
			else
				printf("%lld\n",twoy);
		}
		else
		{
			if(x<0)
				x=0-x;
			if(y<0)
				y=0-y;
			if(x==y)
				printf("%lld\n",twox);
			else if(x<y)
			{
				if((y-x)&1)
					printf("%lld\n",twoy-1);
				else
					printf("%lld\n",twoy);
			}
			else
			{
				if((x-y)&1)
					printf("%lld\n",twox+1);
				else
					printf("%lld\n",twox);
			}
		}
	}
	return 0;
}
