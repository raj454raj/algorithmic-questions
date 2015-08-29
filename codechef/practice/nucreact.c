#include<stdio.h>
int main()
{
long long int a,n,k,i,z=0;
long long int ar[100]={0};

scanf("%lld%lld%lld",&a,&n,&k);
long long int A=a;
if(n)
{	while(A)
	{
		ar[z++]=A%(n+1);
		A/=n+1;
	}

for(i=0;i<k;i++)
	printf("%lld ",ar[i]);
printf("\n");
}
else
{
	for(i=0;i<k;i++)
		printf("0 ");
printf("\n");
}
return 0;
}
