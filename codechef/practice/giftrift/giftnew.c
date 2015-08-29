#include<stdio.h>
#include<stdlib.h>
int r,c,i,j;
int check(int **a,int min,int col)
{
	int max=0;
	for(i=0;i<r;i++)
	{
		if(a[i][col]>max)
			max=a[i][col];
	}
	printf("%d",max);
	if(max==min)
		return 1;	
	return 0;
}
int main()
{
	scanf("%d%d",&r,&c);
	int **a=(int **)malloc(r*sizeof(int *));
	int *min=(int *)malloc(r*sizeof(int));
	int *col=(int *)malloc(c*sizeof(int));
	for(i=0;i<r;i++)
	{
		min[i]=100000005;
		*(a+i)=(int *)malloc(c*sizeof(int));
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]<min[i])
			{
				min[i]=a[i][j];
				col[i]=j;
			}
		}
	}
	for(i=0;i<r;i++)
	{
		printf("%d-->%d",min[i],col[i]);
	}
	int l=0;i=0;
	while(i<r)	
	{
//		printf("*%d*-->",min[i]);
		l=check(a,min[i],col[i]);
		printf("%d",l);
		i++;
	}
	if(l==0)
		printf("GUESS\n");
	return 0;
}
