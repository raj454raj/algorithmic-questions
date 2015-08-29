#include<stdio.h>
#define mod 1000000007
int main()
{
	long long int tree[32769];
	long long int h,i;
	scanf("%lld",&h);
	while(h)
	{
		h=1<<h;
		for(i=1;i<h;i++)
		{
			scanf("%lld",&tree[i]);
		}
		for(i=h/2;i>=1;i--)
		{
			if(tree[2*i]>tree[2*i+1])
				tree[i]=(tree[i]*tree[2*i])%mod;
			else if(tree[2*i]<tree[2*i+1])
				tree[i]=(tree[i]*tree[2*i+1])%mod;
		}
		printf("%lld\n",tree[1]);
	scanf("%lld",&h);
	}
	return 0;
}
