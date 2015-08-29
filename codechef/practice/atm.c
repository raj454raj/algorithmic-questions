#include<stdio.h>
int main()
{
	int x;
	double y;
	while(~(scanf("%d%lf",&x,&y)))
	{
		if(x%5==0&&x<(int)y)
		printf("%.2lf\n",y-x-0.5);
		else
		printf("%.2f\n",y);
	}
	return 0;
}
