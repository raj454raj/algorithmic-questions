#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n&1)
			printf("Lannisters always pays their debts\n");
		else
			printf("Valar Morghulis\n");
	}
	return 0;
}
