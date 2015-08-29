#include<stdio.h>
#include<stdlib.h>
int r,c,**a;
int check(int col,int min)
{
	int i,max=0;
	for(i=0;i<r;i++)
		if(a[i][col]>max)
			max=a[i][col];
	if(max==min)
		return 1;
return 0;
}

int main()
{
int i,j,cl,flag=0,min;
scanf("%d%d",&r,&c);
a=(int **)malloc(r*sizeof(int *));
for(i=0;i<r;i++)
{
	*(a+i)=(int *)malloc(c*sizeof(int));
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<r;i++)
{
	min=a[i][0];
	for(j=0;j<c;j++)
	{
		if(a[i][j]<min)
		{
			min=a[i][j];
			cl=j;
		}

	}
	if(check(cl,min))
	{
		flag=1;
		break;
	}
}
if(flag==1)
	printf("%d",min);
else
	printf("GUESS");
	return 0;
}
