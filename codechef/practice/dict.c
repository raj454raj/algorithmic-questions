#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *str;
int flag=0;
void check(char sub[])
{
	int z,l=strlen(sub),i,j;
	if(str[0]=='\0')
	{
		flag=1;	
		return;
	}
	for(i=0;str[i]!='\0';i++)
	{	
		if(str[i]==sub[0])
		{
			z=strncmp(&str[i],sub,l);
			if(z==0)
			{
				for(j=i;j<=l+i&&str[j]!='\0';j++)
				{
					str[j]=str[j+l];
				}
				flag=flag^1;
			return;
			}	
		}
	}
}
int main()
{
	int q,t,i;
	char **dic=(char **)malloc(30*sizeof(char *));
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		str=(char *)malloc(30);
		scanf("%s",str);
		scanf("%d",&q);
		getchar();
		for(i=0;i<q;i++)
		{
			*(dic+i)=(char *)malloc(30);
			scanf("%s",dic[i]);
		}
		for(i=0;i<q;i++)
			check(*(dic+i));	
		
		printf("%d\n",flag^1);
		
	flag=0;
	}
	return 0;
}
