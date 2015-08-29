#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int h=n/2+1;
	for(i=0;i<h;i++)
	{
		for(k=0;k<n/2-i;k++)
			printf("*");
		for(j=0;j<2*i+1;j++)
			printf("D");
		for(j=n/2+i+1;j<n;j++)
			printf("*");
		printf("\n");
	}
	for(i=0;i<n/2;i++)
	{
		for(k=0;k<=i;k++)
		        printf("*");
		for(j=n-2*i;j>=3;j--)
			printf("D");
		for(j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
