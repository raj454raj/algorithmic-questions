#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
	return *(int *)a>*(int *)b;
}
int main()
{
	int x,y,z,i,tmp;
	scanf("%d%d%d",&x,&y,&z);
	int n=x+y+z;
	int a[50002],w[50002];
	int k=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&tmp);
		a[tmp]++;
		if(a[tmp]==2)
		{
			w[k++]=tmp;
		}
	}
	qsort(w,k,sizeof(int),cmp);
	printf("%d\n",k);
	for(i=0;i<k;i++)
		printf("%d\n",w[i]);
	return 0;
}
