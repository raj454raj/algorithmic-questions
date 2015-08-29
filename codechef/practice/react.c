#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,k,a,i,x[100]={0};
	scanf("%d %d %d",&a,&n,&k);
	a%=(int)pow(n+1,k);
	for(i=k-1;i>=0;i--)
	{
		x[i]=a/(int)pow(n+1,i);
		if(i&&a)
			a%=(int)pow(n+1,i);
	}
	for(i=0;i<k;i++)
		printf("%d ",x[i]);
	printf("\n");
	return 0;
}
