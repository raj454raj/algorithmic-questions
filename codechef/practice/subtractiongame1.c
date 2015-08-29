#include<stdio.h>
int gcd(int a,int b)
{
	int x=a;
	int y=b;
	int r;
	while(y)
	{
		r=x%y;
		x=y;
		y=r;
	}
	return x;
}
int main()
{
	int n,t,i,res;
	scanf("%d",&t);
	int a[1002];
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{	
			scanf("%d",&a[i]);
			if(!i)
				res=a[0];
			else if(i>=1)
				res=gcd(res,a[i]);
		}
		printf("%d\n",res);
	}
	return 0;
}
