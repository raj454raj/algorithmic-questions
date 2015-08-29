#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, k, K,q, *a, i, j;
	scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&q);
	int count,flag,flag1;
	while(q--)
	{
		count=0;
		scanf("%d", &K);
		for(k=0;k<n;k++)
		{
			for(i=k;i<n;i++)
			{
				flag=0;
				flag1=0;
				for(j=k;j<=i;j++)
				{
					if(a[j]<K)
					{
						flag=1;
						break;
					}
					if(a[j]==K)
					{
						flag1=1;
					}

				}
				if(flag == 0 && flag1 == 1)
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

