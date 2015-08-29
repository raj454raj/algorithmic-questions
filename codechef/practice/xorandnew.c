#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i,n,k,j,ans;
	char str[4];

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int *a=(int *)malloc(n*sizeof(int));
		scanf("%d%d",&k,&ans);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		scanf("%s",str);
		for(i=0;i<n;i++)
		{
			switch(str[0])
			{
				case 'X':
				{
					for(j=0;j<=k;j++)
						ans^=a[j]
					break;
				}
			}
		
		}
		
		printf("%d\n",ans);
	}
	return 0;
	"xorand.c" 41L, 566C                                                                                                          1,1           Top

