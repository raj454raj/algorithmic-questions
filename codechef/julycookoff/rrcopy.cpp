#include<iostream>
#include<stdio.h>
#define g getchar_unlocked
using namespace std;

int readnum()
{
	int num=0;
	char c=g();
	while(c<'0'||c>'9')c=g();
	while(c>='0'&&c<='9')num=(num<<1)+(num<<3)+c-'0',c=g();
	return num;
}

int main()
{
	int x,t,n,i,count;
	t=readnum();
	while(t--)
	{
		count=0;
		int a[100001]={0};
		n=readnum();
		for(i=0;i<n;i++)
		{
			x=readnum();
			a[x-1]++;
			if(a[x-1]==1)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}

