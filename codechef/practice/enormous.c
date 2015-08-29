#include<stdio.h>
#define g getchar_unlocked
void print(int x)
{
	char arr[10];
	int i,z=0;
	while(x)
	{
		arr[z++]=x%10+'0';
		x/=10;
		//putchar();
	}
	while(z)
		putchar_unlocked(arr[--z]);
	putchar_unlocked('\n');
}

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
	int n,k;
	int t;
	int count;
	n=readnum();
	k=readnum();
	count=0;
	while(n--)
	{
		//scanf("%d",&t);
		t=readnum();
		if((t)%k==0)
			count++;
	}
	//printf("%d\n",count);
	print(count);
	return 0;
}
