#include<stdio.h>
int main()
{
	int t,i,n,z,x;
	char str[]="abcdefghijklmnopqrstuvwxyz";
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		z=n/25;
		x=n%25;
		if(x)
		while(x>=0)	
			printf("%c",str[x--]);
		while(z--)
		{
			for(i=25;i>=0;i--)
				printf("%c",str[i]);
		}
		printf("\n");

	}
	return 0;
}
