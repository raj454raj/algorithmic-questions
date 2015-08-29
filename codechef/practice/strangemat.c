#include<stdio.h>
#define g getchar_unlocked
int readnum()
{
	int num=0;
	char c=g();
	while(c<'0'||c>'9')c=g();
	while(c>='0'&&c<='9')
	{
		num=(num<<3)+(num<<1)+c-'0';
		c=g();
	}
	return num;
}
int gcd(int x,int y)
{
	if(y==0)
		return x;
	return gcd(y,x%y);
}
int main()
{
	int t,n,m;
	//scanf("%d",&t);
	t=readnum();
	while(t--)
	{
		//scanf("%d%d",&n,&m);
		n=readnum();
		m=readnum();
		if(n==1 || n==m)
			printf("%d\n",m);
		else if(m==1)
			printf("%d\n",n);
		else
		{
			printf("%d\n",gcd(n-1,m-1)+1);
		
		}
	}
	return 0;
}
