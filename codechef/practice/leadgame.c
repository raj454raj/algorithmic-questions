#include<stdio.h>
#include<stdlib.h>

struct round
{
	int leader;
	int score[2];
	int lead;
};
typedef struct round round;


int main()
{
	int i=0,num,n,max=0,pos;
	scanf("%d",&n);
	int sum1=0,sum2=0;
	round *r=(round *)malloc(n*sizeof(round));
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&r[i].score[0],&r[i].score[1]);
		sum1+=r[i].score[0];
		sum2+=r[i].score[1];
		r[i].lead=sum1-sum2;
		if(r[i].lead<0)
		{
			r[i].leader=2;
			r[i].lead=-r[i].lead;
		}
		else
			r[i].leader=1;
		if(r[i].lead>max)
		{
			max=r[i].lead;
			pos=i;
		}
	}
		printf("%d %d",r[pos].leader,r[pos].lead);
	return 0;
}
