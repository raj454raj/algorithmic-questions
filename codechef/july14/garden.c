#include<stdio.h>
#define m 1000000007
int mainarray[100002];
int n;
int check(int tmp[])
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(tmp[i]!=i)
			return 0;
	}
	return 1;
}
long long int count(int tmp[])
{
	if(check(tmp))
		return 1;
}
int main()
{
	int t,i;
	int tmparray[100002];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&mainarray[i]);
			tmparray[i]=i;
		}
		count(tmparray);
	}
	return 0;
}
