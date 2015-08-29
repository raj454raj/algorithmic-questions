#include<stdio.h>
int main()
{
	long long int x1,x2,x3,y1,y2,y3,d1,d2,d3;
	int n;
	int count=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lld%lld%lld%lld%lld%lld",&x1,&y1,&x2,&y2,&x3,&y3);
		d1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		d2=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
		d3=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
		if((d1 == d2+d3)||(d2 == d1+d3)||(d3 == d1+d2))
			count++;
	
	}
	printf("%d",count);
	return 0;
}
