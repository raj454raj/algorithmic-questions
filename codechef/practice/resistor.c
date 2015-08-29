#include<stdio.h>
int main()
{
	int n,m,t,i,num,den;
	scanf("%d",&t);
	while(t--)
	{	
		num=1;den=1;
		scanf("%d%d",&n,&m);
		n--;
		while(n--)
		{
			num+=den;
			if(num>=m)
				num-=m;
			den+=num;
			if(den>=m)
				den-=m;
		}
		printf("%d/%d\n",num,den);
	}
	return 0;
}
