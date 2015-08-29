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
	int i,t,n,k,x,cont,flag;
	t=readnum();
	while(t--)
	{
		n=readnum();
		k=readnum();
		cont=0;
		flag=0;
		for(i=0;i<n;i++)
		{
			x=readnum();
			if(!flag&&!(x&1))
			{
				cont++;
				if(cont==k)
					flag=1;
			}
			if(k==0&&x&1)
				flag=1;
		}
		if(!flag)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
