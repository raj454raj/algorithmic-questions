#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,i,a[26];
	char s[2001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		l = strlen(s);
		for(i = 0;i < 26;i++)
			a[i] = 0;
		for(i = 0;i < (l/2);i++)
		{
			a[s[i]-'a']++;
		}
		if(l%2 != 0)
			i = l/2 + 1;
		for(;i < l;i++)
		{
			if(a[s[i]-'a'] != 0)
				a[s[i]-'a']--;
		}
		l = 0;
		for(i = 0;i < 26;i++)
			l += a[i];
		if(l == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}	
	return 0;
}
