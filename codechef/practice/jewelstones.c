#include<stdio.h>
int main()
{
	int t,i,count;
	char str1[102],str2[102];
	scanf("%d",&t);
	while(t--)
	{
		int a[52]={0},b[52]={0};
		scanf("%s%*c",str1);
		scanf("%s%*c",str2);
		for(i=0;str1[i];i++)
		{
			if(str1[i]>='a'&&str2[i]<='z')
				a[str1[i]-'a']++;
			else
				a[str1[i]-'A'+26]++;
		}

		for(i=0;str2[i];i++)
		{
			if(str2[i]>='a'&&str2[i]<='z')
				b[str2[i]-'a']++;
			else
				b[str2[i]-'A'+26]++;
		}
		count=0;
		for(i=0;i<52;i++)
		{
			//printf("%d.%d   %d\n",i,a[i],b[i]);
			if(a[i] && b[i])
			{
				count+=b[i];
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
