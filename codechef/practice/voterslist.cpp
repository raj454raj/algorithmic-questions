#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace::std;
int minimum(int x, int y, int z)
{
	int min=x;
	if(y<min)
		min=y;
	if(z<min)
		min=z;
	return min;
}
int compare(const void *a, const void *b)
{
	return *(int *)a>*(int *)b;
}
int main()
{
	int i,x,y,z,tmp;
	scanf("%d%d%d",&x,&y,&z);
	int a[50001]={0},*w;
	int min=minimum(x, y, z);
	w=(int *)malloc(min*sizeof(int));
	int k=0;
	for(i=0;i<x+y+z;i++)
	{
		scanf("%d",&tmp);
		a[tmp]++;
		if(a[tmp] == 2)
		{
			w[k++]=tmp;
		}
	}
	//cout<<endl;
	qsort(w,k,sizeof(int),compare);
	printf("%d\n",k);
	for(i=0;i<k;i++)
		printf("%d\n",w[i]);
	return 0;
}
