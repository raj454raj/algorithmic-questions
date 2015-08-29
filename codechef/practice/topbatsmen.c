#include<stdio.h>
int compare(const void *a,const void *b)
{
	int *p=(int *)a;
	int *q=(int *)b;
	return *p > *q;
}
int main()
{
	int t,k;
	int a[11],i,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		for(i=0;i<11;i++)
			scanf("%d",&a[i]);
		scanf("%d",&k);
		qsort(a,11,sizeof(int),compare);	
		for(i=11-k;i<11;i++)
			sum+=a[i];
		printf("%d\n",sum);
	}
	return 0;
}
