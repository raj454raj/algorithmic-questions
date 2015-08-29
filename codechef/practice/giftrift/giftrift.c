#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int r,c,i,j,MAX=100000001,flag=0;
	scanf("%d%d",&r,&c);
	int **a=(int **)malloc(r*sizeof(int *));
	int *min=(int *)malloc(r*sizeof(int));
	int *max=(int *)malloc(c*sizeof(int));
	for(i=0;i<r;i++)
	{
		*(a+i)=(int *)malloc(c*sizeof(int)); 
		min[i]=MAX;
		for(j=0;j<c;j++)
		{
			scanf("%d",(a[i]+j));
			if(a[i][j]<=min[i])
				min[i]=a[i][j];
		}
	}
	for(j=0;j<c;j++)
	{
		max[j]=0;
		for(i=0;i<r;i++)
		{
			if(a[i][j]>max[j])
				max[j]=a[i][j];

		}
	}
	i=0;j=0;
	while(i<r)
	{
		j=0;
		while(j<c)
		{	if(min[i]==max[j++])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
		i++;
	}
	if(flag==1)
		printf("%d\n",min[i]);
	else
		printf("GUESS\n");
	return 0;
}
