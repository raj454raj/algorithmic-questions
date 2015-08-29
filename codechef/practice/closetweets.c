#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,k,x;
	int *a;
	char str[9];
	scanf("%d%d",&n,&k);
	a=(int *)malloc(n*sizeof(int));
		memset(a,0,n*sizeof(int));
	int count=0,tmp;
	while(k--)
	{
		scanf("%s",str);
		if(str[2]=='I')
		{
			scanf("%d",&x);
			a[x-1]^=1;
			if(a[x-1]==1)
				count++;
			else 
				count--;
		printf("%d\n",count);
		}
		else
		{
			memset(a,0,n*sizeof(int));
			printf("0\n");
			count=0;
		}
	}
	return 0;
}
