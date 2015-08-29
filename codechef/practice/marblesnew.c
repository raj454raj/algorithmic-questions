#include<stdio.h>
#define g getchar_unlocked
long long int readnum()
{
	long long int n=0;
	char c=g();
	while(c<'0'&&c>'9')c=g();
	while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
	return n;
}

int main()
{
	long long int pr,i,n,k,j,t;
	//scanf("%lld",&t);
	t=readnum();
	while(t--)
	{
		//scanf("%lld%lld",&n,&k);
		n=readnum();
		k=readnum();
		pr=1;
		n--;k--;
		if(k>n/2)
			k=n-k;
		for(i=1;i<=k;++i)
		{
			pr=pr*(n-(k-i))/i;
		}
		printf("%lld\n",pr);
	}
	return 0;
}
