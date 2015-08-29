#include<stdio.h>
int main()
{
	int n,j;
	char str[102];
	scanf("%d",&n);
	int i,a[102][26]={0};
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		for(j=0;str[j];j++)
		{
			a[i][str[j]-'a']++;
		}
	}
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<26;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}*/
	int flag,count=0;
	for(i=0;i<26;i++)
	{
		flag=0;
		for(j=0;j<n;++j)
		{
			if(a[j][i]==0)
			{
				flag=1;
				break;
			}
		}
		if(!flag)
			count++;
	}
	printf("%d",count);
	return 0;
}
