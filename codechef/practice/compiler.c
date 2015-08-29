#include<stdio.h>
int main()
{
	int t,i,answer,flag,count;
	char str[1000000];
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		scanf("%s%*c",str);
		count=0;
		answer=0;
		for(i=0;str[i];i++)
		{
			if(str[i]=='<')
				count++;
			else
				count--;
			if(!count)
				answer=i+1;
			if(count<0)
				break;
		}
		printf("%d\n",answer);
	
	}
	return 0;
}
