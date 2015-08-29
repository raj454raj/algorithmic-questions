#include<stdio.h>
#include<math.h>
#define eps 0.000001
struct point
{
	int x,y;
};
typedef struct point point;
int main()
{
	point p,q,tmp;
	float m;
	int t,count,i;
	float j;
	scanf("%d",&t);
	while(t--)
	{

		scanf("%d%d%d%d",&p.x,&p.y,&q.x,&q.y);
		count=0;
		if(p.x>q.x)
		{
			tmp=p;
			p=q;
			q=tmp;
		}
//		printf(" %d %d \n",p.x,q.x);
		if(p.x==q.x)
		{
//			printf("**");
			for(i=p.y+1;i<q.y;i++)
				count++;
			printf("%d\n",count);
			continue;
		}
		m=(float)(p.y-q.y)/(p.x-q.x);
		for(i=p.x+1;i<q.x;i++)
		{
			j=(float)p.y+m*(float)(i-p.x);
//			printf("%f**",m);
			if(fabs(j-floor(j))<eps)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
