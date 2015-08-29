#include<stdio.h>
int cmp1(const void *a,const void *b)
{
	return *(int *)a>*(int *)b;
}
int cmp2(const void *a,const void *b)
{
	return *(int *)a<*(int *)b;
}
int main()
{
	int n,k,t,i,flag;
	int p[1001],q[1001];
	scanf("%d",&t);
	while(t--)
	{
		flag=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&p[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&q[i]);
		}
		qsort(p,n,sizeof(int),cmp1);
		qsort(q,n,sizeof(int),cmp2);
		for(i=0;i<n;i++)
		{
			if(p[i]+q[i]<k)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
