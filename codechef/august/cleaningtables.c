#include<stdio.h>
#define g getchar_unlocked
int readnum()
{
	int n=0;
	char c=g();
	while(c<'0'||c>'9')c=g();
	while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
	return n;
}
int main()
{
	int n,m,t,i,z;
	int a[203];
	int distinct;
	int countoforders[403],b[403];
	t=readnum();
	while(t--)
	{
		distinct=0;z=0;
		n=readnum();
		m=readnum();
		for(i=0;i<m+3;i++)
		{
			if(i<=n+1)
				a[i]=0,countoforders[i]=0;
			else
				countoforders[i]=0;
		}
		for(i=1;i<=m;i++)
		{
			b[i]=readnum();
			countoforders[b[i]]++;
			/*if(z==n)
			{
				
			}*/
			if(countoforders[b[i]]==1&&z!=n)
			{
				distinct++;
				a[++z]=b[i];
			}
			
		}
		for(i=1;i<=z;i++)

			printf("%d ",a[i]);
		printf("%d\n",distinct);
		
	}
	return 0;
}
