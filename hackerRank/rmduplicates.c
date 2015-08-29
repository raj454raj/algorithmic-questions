#include<stdio.h>
int main()
{
	char str[30001];
	scanf("%s",str);
	int i,a[26]={0};
	for(i=0;str[i];++i)
	{
		a[str[i]-'a']++;
		if(a[str[i]-'a']==1)
			printf("%c",str[i]);
	}
	return 0;
}
