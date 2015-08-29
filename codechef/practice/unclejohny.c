#include<stdio.h>
int a[100];
int t,n,k,i,element;
int compare(const void *a,const void *b)
{
	int *p=(int *)a;
	int *q=(int *)b;

	return *p>*q;
}
int binsearch(int x)
{
	int mid,beg=0,last=n-1;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(a[mid]==x)
			return mid;
		else if(a[mid]>x)
			last=mid-1;
		else
			beg=mid+1;
	}
}
int main()
{
	int pos;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		scanf("%d",&k);
		element=a[k-1];
		qsort(a,n,sizeof(int),compare);
		pos=binsearch(element);
		printf("%d\n",pos+1);
	}
	return 0;
}
