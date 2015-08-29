#include<stdio.h>
#include<stdlib.h>
struct arr
{
	int a,b;
};

//typedef struct arr arr;
int compare(const void *x,const void *y)
{
	struct arr *p=(struct arr *)x;
	struct arr *q=(struct arr *)y;
	return (p->a)>(q->a);
}
int main()
{
	int n;
	//n=readnum();
	scanf("%d",&n);
	struct arr tmp[n+1];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&tmp[i].a,&tmp[i].b);
	}
	qsort(tmp,n,sizeof(struct arr),compare);
/*	for(i=0;i<n;i++)
	{
		printf("%d %d\n",tmp[i].a,tmp[i].b);
	}*/
	int flag=1;
	for(i=1;i<n;i++)
	{
	//	printf("%d %d\n",
		if(tmp[i].b<tmp[i-1].b)
		{
			flag=0;
		}

	}
	if(flag)
		printf("Poor Alex\n");
	else
		printf("Happy Alex\n");
	return 0;
}
