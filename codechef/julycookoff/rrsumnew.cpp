#include<iostream>
#include<stdio.h>
#define g getchar_unlocked
using namespace std;

long long int readnum()
{
	long long int num=0;
	char c=g();
	while(c<'0'||c>'9')c=g();
	while(c>='0'&&c<='9')num=(num<<1)+(num<<3)+c-'0',c=g();
	return num;
}

int main()
{
	long long int count,i,n,m,q;
	n=readnum();
	m=readnum();
	while(m--)
	{
		q=readnum();
		if(q<n+2||q>3*n)
		{
			//cout<<"0\n";
			printf("0\n");
			continue;
		}
		else if(q>2*n+1)
			count=3*n-q+1;
		else
			count=q-n-1;
		//cout<<count<<endl;
		printf("%lld\n",count);
	}
	return 0;
}

