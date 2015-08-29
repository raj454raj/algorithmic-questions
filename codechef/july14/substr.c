#include<stdio.h>
int main()
{
	int t,n,i,j,k,z,flag,count;
	char str[100001];
	char substr[100001];
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		getchar();
		scanf("%s",str);
		for(i=0;str[i];i++)
		{
			for(k=0;k<n;k++)
			{
				z=0;flag=0;
				for(j=i;j<=k&&str[j];j++)
				{
					flag=1;
					substr[z++]=str[j];
					//printf("%c",str[j]);
				}
				if(flag==1)
				{
					substr[z]='\0';
					if(substr[0]=='1'&&substr[z-1]=='1')
					{
						count++;
					}
				}
				//printf("\n");
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
