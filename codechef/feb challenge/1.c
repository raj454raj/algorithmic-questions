#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, t, count;
	char c, *str;
	str = (char *)malloc(10000);
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		c = 'a';
		count = 0;
		int a[62] = {0}, b[62] = {0};
		while(c != '\n')
		{
			c = getchar();
			if(islower(c))
				a[c-'a']++;
			else if(isupper(c))
				a[c-'A'+26]++;
			else if(isdigit(c))
				a[c-'0'+52]++;

		}
		c = 'a';
		while(c != '\n')
		{
			c = getchar();
			if(islower(c))
				b[c-'a']++;
			else if(isupper(c))
				b[c-'A'+26]++;
			else if(isdigit(c))
				b[c-'0'+52]++;
		}
		for(i = 0 ; i < 62 ; i++)
		{
			if(a[i]==b[i])
				count+=a[i];
			else if(a[i]<b[i])
				count+=a[i];
			else 
				count+=b[i];
		}
		printf("%d\n", count);
	}
}
