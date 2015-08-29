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
int main()
{
	long long int n,t,count;
	t=readnum();
	//anf("%lld",&t);
	while(t--)
	{
	//	scanf("%lld",&n);
		n=readnum();
		printf("%lld\n",n-1);
	}
	return 0;
}
