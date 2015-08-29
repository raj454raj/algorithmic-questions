#include<stdio.h>
int max(int x,int y)
{
	if(x>=y)
		return x; 
	return y;
}
int main()
{
	int i,m,j,n,t,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&n);
		int a[100][100]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			scanf("%d",&a[i][j]);
	}
/*	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
	printf("\n");
	}*/
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
			a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
	}
	sum=a[0][0];
	printf("%d\n",sum);
	}
return 0;
}
