#include<stdio.h>
int compare(const void *a,const void *b)
{
	int *p=(int *)a;
	int *q=(int *)b;
	return *p>*q;
}
int main()
{
	int i,n,t,min;
	int a[5001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		qsort(a,n,sizeof(int),compare);
		min=a[1]-a[0];
		for(i=1;i<n-1;i++)
		{
			if(a[i+1]-a[i]<min)
				min=a[i+1]-a[i];
		}	
		printf("%d\n",min);
	}
	return 0;
}
