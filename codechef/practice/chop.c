#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
	int *p=(int *)a;
	int *q=(int *)b;
	return *p>*q;
}
int main()
{
	int n,d,p,q,count=0;
	scanf("%d%d",&n,&d);
	int *a=(int *)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n==1)
	{
		printf("0");
		return 0;
	}
		qsort(a,n,sizeof(int),compare);
	p=0;
	q=1;
	while(p<=n-1 && q<=n-1)
	{
		if(a[q]-a[p]<=d)
		{
			count++;
			p+=2;
			q+=2;
		}
		else
		{
			p++;
			q++;
		}

	}
	printf("%d",count);
	return 0;
}
