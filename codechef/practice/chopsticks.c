#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
	int *p=(int *)a;
	int *q=(int *)b;
	return *p>*q;
}
int main()
{
	int n,d;
	scanf("%d%d",&n,&d);
	int i;
	int *a=(int *)malloc(n*sizeof(int));
	int *b=(int *)malloc(n*sizeof(int));
	int p,q,z=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	qsort(a,n,sizeof(int),compare);

	p=a[z];
	int count=0;
	for(i=1;i<n;i++)
	{
		if(a[i]==1 || a[z]==1)
		{
			p=a[++z];
			continue;
		}
		q=a[i];
		if(q-p<=d && i!=n-1)
		{
			count++;
			b[z]=1;
			b[i]=1;
			p=a[++z];
		}
		else
			p=a[++z];
	}
	printf("%d\n",count);
	return 0;
}
