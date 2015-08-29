#include<stdio.h>
int main()
{
int *a,i=1;
a=(int *)malloc(100000*sizeof(int));
scanf("%d",&a[0]);
while(a[i-1]<=99)
{
	scanf("%d",&a[i]);
	i++;
}
int j;
for(j=0;j<i,a[j]!=42;j++)
	printf("%d\n",a[j]);
return 0;
}
