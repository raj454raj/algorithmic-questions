#include<stdio.h>
int compare(const void *a, const void *b)
{
	return *(int *)a>*(int *)b;
}
int main()
{
	int n,k,t,i,half1,half2;
	scanf("%d",&t);
	int a[100];
	while(t--)
	{
		half1=half2=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		qsort(a,n,sizeof(int),compare);
		if(k>n/2)
			k=n-k;
		for(i=0;i<n;i++)
		{
			if(i<k)
				half1+=a[i];
			else
				half2+=a[i];
		}
		printf("%d\n",abs(half1-half2));
	}
	return 0;
}
