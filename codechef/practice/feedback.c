#include<stdio.h>
#include<string.h>
int main()
{
	char s[100000];
	int t,i,flag,l;
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		flag=0;
		l=strlen(s);
		for(i=0;i<l-2;i++)
		{
			if((s[i]=='1'&&strncmp(&s[i],"101",3)==0)||(s[i]=='0'&&strncmp(&s[i],"010",3)==0))
			{
				printf("Good\n");
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("Bad\n");
	}
	return 0;
}
