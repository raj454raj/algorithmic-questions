#include <stdio.h>
#include <stdlib.h>
int function(int **a,int val,int col,int r)
{
	int i,s=1;
	for(i=0;i<r;i++)
	{
		if(a[i][col]>val)
		{
			s=0;
			return s;
		}	
	}
	return s;
}
int main()
{
	int r,c,i,j,min,val,check,state=0,flag=0;
	scanf("%d %d",&r,&c);
	int * max=(int *)malloc(sizeof(int)*r);
	int ** a=(int **)malloc(sizeof(int *)*r);
	for(i=0;i<r;i++)
	{
		min=100000009;
		a[i]=(int *)malloc(sizeof(int)*c);
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j] < min)
				min=a[i][j];
		}
		max[i]=min;
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==max[i])
			{
				check=function(a,max[i],j,r);
				if(check==1 && flag==0)
				{
					flag=1;
					val=max[i];
				}
				else if(check==1 && flag==1)
				{
					if(max[i]!=val)
					{
						state=1;
						break;
					}
				}
			}
		}
	}
	if(state==1)
		printf("GUESS\n");
	else if(state==0 && flag==1)
		printf("%d\n",val);
	else
		printf("GUESS\n");
	return 0;
}
