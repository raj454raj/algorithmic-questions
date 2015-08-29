#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,m;
	int a[1000001]={0};
	scanf("%d%d",&n,&m);
	int p=n*m;
	for(int i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
	}
	int q,num,flag;
	scanf("%d",&q);
	for(int j=0;j<q;j++)
	{
		scanf("%d",&num);
		flag=0;
		for(int i=0;i<p;i++)
		{
			if(a[i]==num)
			{
				printf("%d %d",i/n,i%m);
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("-1 -1");
	}
	return 0;
}
