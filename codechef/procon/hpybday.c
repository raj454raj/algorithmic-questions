#include<stdio.h>
#define g getchar_unlocked
long long int readnum()
{	
	char c=g();
	long long int n=0;
	while(c<'0'||c>'9')c=g();
	while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
	return n;
}
int dig=0;
int checksum(long long int i)
{
	int tmpsum=0;
	while(i)
	{
		tmpsum+=i%10;
		i=i/10;
		dig++;
	}
	if(tmpsum==13)
		return 1;
	return 0;
}
int main()
{
	long long int t,n,i,count;
	t=readnum();
	while(t--)
	{
		n=readnum();
		count=0;
		if(n<=480)
		{
			for(i=49;i<=472;i++)
			{
				dig=0;
				if(checksum(i))
				{
					//printf("%lld,",i);
					count++;
				}
				if(count==n)
					break;
				
			}
			printf("%d\n",dig);
		}
		else if(n>=26545)
			printf("8\n");
		else if(n>=8233)
			printf("7\n");
		else if(n>=2206)
			printf("6\n");
		else if(n>=481)
			printf("5\n");
		//printf("%d\n",dig);
	}
	return 0;
}
