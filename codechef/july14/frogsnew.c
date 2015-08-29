#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cmp(const void *a,const void *b)
{
	return *(long long int *)a>*(long long int *)b;
}
int main()
{
	long long int j,tmp,i,n,p,k,x,y;
	long long int ar[100001],br[100001];
	int a,b,flag;
	scanf("%lld%lld%lld",&n,&k,&p);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&ar[i]);
		br[i]=ar[i];
	}
	qsort(ar,n,sizeof(long long int),cmp);
	for(i=0;i<p;i++)
	{
		scanf("%d%d",&a,&b);
		--a;--b;
		x=br[a];
		y=br[b];
		tmp=x;
		j=0;flag=0;
		if(abs(y-x)<=k)
			flag=2;
		else
		{
			while(j<n)
			{
				if(ar[j]-tmp>k)
					break;
				if(ar[j]==x)
				{
					flag=1;
				}
				else if(flag==1&&ar[j]-tmp<=k)
				{
					tmp=ar[j];
				}
				if(ar[j]==y)
				{
					flag=2;
					break;
				}
				j++;
			}
		}
		if(flag==2)
			printf("Yes\n");
		else
			printf("No\n");

	}

	return 0;
}
