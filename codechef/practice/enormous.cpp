#include<iostream>
#include<stdio.h>
using namespace std;
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
int main()
{
	int n,k;
	int t;
	int count;
	scanf("%d%d",&n,&k);
	//cin>>n>>k;	
	count=0;
		while(n--)
		{
			scanf("%d",&t);
			//cin>>t;
			if((t)%k==0)
				count++;
		}
	//cout<<count;
	print(count);
	return 0;
}
