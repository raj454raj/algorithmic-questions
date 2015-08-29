#include<stdio.h>
int main()
{

	double t,c,n,u,i,min,m,d,r,t_cost,cost,a;
	scanf("%lf",&t);
	int temp;
	while(t--)
	{
		temp=0;
		scanf("%lf%lf%lf",&d,&u,&n);
		min=d*u;
		for(i=0;i<n;i++)
		{
			scanf("%lf%lf%lf",&m,&r,&c);
			a=u*r;
			cost=c/m;
			t_cost=(cost+a);

			if( t_cost < min)
			{
				min = t_cost;
				temp=i+1;
		
			}
		}
		printf("%d\n",temp);
	}
	return 0;
}
