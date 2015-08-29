#include<stdio.h>
#include<string.h>
int main()
{
	int z,i,t,l,flag;
	char s[1002],str1[503],str2[503];
	scanf("%d",&t);
	int a[26];
	while(t--)
	{
		flag=0;
		for(i=0;i<26;i++)
			a[i]=0;
		scanf("%s",s);
		l=strlen(s);
			strncpy(str1,s,l/2);
			str1[l/2]='\0';
			if(l%2==0)
			{
				strncpy(str2,&s[l/2],l/2);
				z=l/2;
			}
			else
			{
				strncpy(str2,&s[l/2+1],l/2+1);
				z=l/2+1;
			}
		for(i=0;str1[i];i++)
		{
			a[str1[i]-'a']++;
			a[str2[i]-'a']--;
		}
		for(i=0;i<26;i++)
		{
			if(a[i]!=0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("NO\n");
		else
			printf("YES\n");

	}
	return 0;
}
