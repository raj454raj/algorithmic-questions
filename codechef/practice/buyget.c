#include<stdio.h>
int main()
{
	int t;
	int i,count;
	scanf("%d\n",&t);
	int a[52];
	char c;
	while(t--)
	{
		count=0;
		for(i=0;i<52;i++)
			a[i]=0;
		while(1)
		{
			scanf("%c",&c);
			if(c=='\n')
				break;
			if(c>='a' && c<='z')
			{
				a[c-'a']++;
				if(a[c-'a']==2)
				{
					count++;
					a[c-'a']=0;
				}
			}
			else if (c>='A' && c<='Z')
			{
				a[c-'A'+26]++;
				if(a[c-'A'+26]==2)
				{
					count++;
					a[c-'A'+26]=0;
				}
			}
		}
		for(i=0;i<52;i++)
			if(a[i]&1)
				count++;
		printf("%d\n",count);
	}
	return 0;
}
