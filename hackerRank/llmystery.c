#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,i,j,count;
	char str[10003];
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%s",str);
		l=strlen(str);
		i=0;j=l-1;
		while(i<l/2)
		{
			count+=abs(str[i]-str[j]);
			i++;j--;
		}
		printf("%d\n",count);
	}
	
	return 0;
}
