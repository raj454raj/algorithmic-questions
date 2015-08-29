#include<stdio.h>
int ispoweroftwo(int x)
{
	return x&&(!(x&(x-1)));
}
int main()
{
	int t,flag,i;
	scanf("%d",&t);
	long long int n,N;
	while(t--)
	{
		scanf("%lld",&n);
		N=n;
		flag=0;
		while(n!=1)
		{
			if(ispoweroftwo(n))	
			{
				n/=2;
				flag=!flag;
			}
			else
			{
				for(i=n-1;i>=2;i--)		
				{
					if(ispoweroftwo(i))
					{
						n-=i;
						flag=!flag;
						break;
					}
				}
			}
		}
		if(!flag)
			printf("%lld-->Richard\n",N);
		else
			printf("%lld-->Louise\n",N);
	}
	return 0;
}

