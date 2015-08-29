#include<stdio.h>
int main()
{
	int t,count,i,j,flag;
	int a[100];
	scanf("%d%*c",&t);
	char c;
	while(t--)
	{
		for(i=0;i<100;i++)
			a[i]=0;
		c=getchar();
		while(c!='\n')
		{
			a[c-' ']++;
			c=getchar();
		}
		count=0;
		flag=0;
		for(i=100;i>=0;i--)
		{
			j=i+32;
			if(j==32||(j>=65&&j<=90)||(j>=97&&j<=122))
			{
				if(!a[i]&&count<4)
				{
					flag=1;
					printf("%c",j);
					count++;
				}
			}
		}
		if(flag==0)
			printf("~");
		printf("\n");

	}
	return 0;
}
