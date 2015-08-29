#include<stdio.h>
int main()
{
	int n,i;
	int a[102]={0},x;
	scanf("%d",&n);
	int max = -1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x>max)
			max=x;
		a[x]++;
	}
	for(i=0;i<=max;i++)
	{	
		if(a[i]==1)
		{
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
