#include<stdio.h>
#include<string.h>
int main()
{
	int n,t,i,j,flag1,flag2,k;
	char suffix[100];
	char c,a,b,str[1000000];
	int containspoint;
	int onlyzero;
	scanf("%d",&t);
	while(t--)
	{
		containspoint = 0;
		onlyzero = 1;
		memset(suffix,100,0);
		scanf("%d",&n);
		c = getchar();
		while(n--)
		{
			scanf("%c%*c%c%*c",&a,&b);
			suffix[a-33] = b;	
		}
		scanf("%s",str);
		for(i=0;str[i];i++)
		{
			if(suffix[str[i]-33])
			{
				str[i]=suffix[str[i]-33];
			}
			if(str[i]=='.')
				containspoint=1;
			if(str[i]!='.' && str[i]!='0')
				onlyzero = 0;
		}

		if(onlyzero)
		{
			printf("0\n");
			continue;
		}
		
		i=0;j=strlen(str)-1;
		flag1=0;flag2=0;
		if(containspoint)
		{
			while(1)
			{
				if(flag1&flag2)
					break;
				if(str[i]=='0')
				{
					i++;
				}
				else if(str[i]!='0')
					flag1=1;
				if(str[j] == '0')
				{
					j--;
				}
				else if(str[j] == '.')
				{
					j--;
					flag2=1;
				}
				else if(str[j]!='0')
					flag2=1;
			}
			for(k=i;k<=j;k++)
			{
				printf("%c",str[k]);
			}
		}
		else
		{
			while(str[i]=='0')
			{
				i++;
			}
			printf("%s",&str[i]);
		}
		printf("\n");
	}
	return 0;
}
