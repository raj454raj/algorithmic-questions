#include<stdio.h>
int main()
{
	int n,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n&1)
			printf("BOB\n");
		else
			printf("ALICE\n");
	}
	return 0;
}
