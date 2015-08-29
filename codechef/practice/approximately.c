#include<stdio.h>
int main()
{
	int t,k,dividend=103993,divisor=33102;
	scanf("%d",&t);
	int quotient;
	while(t--)
	{
		dividend=103993;divisor=33102;
		dividend=(dividend%divisor)*10;
		
		scanf("%d",&k);
		printf("3");
		if(k)
			printf(".");
		while(k--)
		{
			quotient=dividend/divisor;
			dividend=(dividend%divisor)*10;
			printf("%d",quotient);
		}
		printf("\n");
	}
	return 0;
}
