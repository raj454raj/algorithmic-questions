#include<stdio.h>
#define g getchar_unlocked
int readnum()
{
	char c=g();
	while(c<'0'||c>'9')c=g();
	int num=0;
	while(c>='0'&&c<='9')
	{
		//num=num*10+c-'0';
		num=(num<<1)+(num<<3)+c-'0';
		c=g();
	}
	return num;

}
int main()
{
	int n;
	int i,j,count=0;
	//scanf("%d",&n);
	n=readnum();
	while(n--)
	{
		//scanf("%d%d",&i,&j);
		i=readnum();
		j=readnum();
		count=0;
		while(i!=j)
		{
			if(i>j)
				i=i>>1;
			else
				j=j>>1;
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
