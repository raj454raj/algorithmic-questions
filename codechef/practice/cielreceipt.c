#include<stdio.h>
int binary(int n)
{
	int count=0;
	while(n)
	{
		if(n&1)
			count++;
		n/=2;
	}
	return count;
}

int main()
{
	int n,t,i,count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		if(n<=2048)
		{
			printf("%d\n",binary(n));
		}
		else
		{
			while(1)
			{
				n-=2048;
				count++;
				if(n<=2048)
				{
					printf("%d\n",binary(n)+count);
					break;
				}
			}
		}
	}
	return 0;
}
