#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
	int *p=(int *)a;
	int *q=(int *)b;
	return *p-*q;
}
int main()
{
	int n,i;
	int *a;
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		
		qsort(a,n,sizeof(int),compare);
		for(i=0;i<n;i++)
			printf("%d\n",a[i]);
	return 0;
}
