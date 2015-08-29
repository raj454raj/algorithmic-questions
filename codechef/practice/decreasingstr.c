#include<stdio.h>
int main()
{
	int t,i,n,z;
	char str[]="zyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcba";
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=108-n;i<=107;i++)
			printf("%c",str[i]);
		printf("\n");

	}
	return 0;
}

