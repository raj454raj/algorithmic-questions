#include<stdio.h>
int main()
{
	char c;
	int a[26]={0},i;
	char str[100000];
	int count=0,flag=0;
	while(~scanf("%s",str))
	{
		count=0;
		flag=0;
		for(i=0;i<26;i++)
			a[i]=0;
		for(i=0;str[i];i++)
		{
			a[str[i]-'a']++;
		}
		for(i=0;i<26;i++)
		{
			if(a[i]&1)
			{
				count++;
				flag=1;
			}
		}
		if(flag==0)
			printf("YES\n");
		else if(flag==1 && count==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
