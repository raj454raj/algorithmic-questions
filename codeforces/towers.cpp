#include<iostream>
using namespace std;
int main()
{
	int n,x,max=0;
	int a[1002]={0};
	cin>>n;
	int i,distinct=0,twice;
	
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(max<x)
			max=x;
		a[x]++;
	}
	int fmax=0;
	for(i=1;i<=max;i++)
	{
		if(a[i])
		{
			if(a[i]>fmax)	
				fmax=a[i];
			distinct++;
		}
	}
	cout<<fmax<<" "<<distinct;

	return 0;
}
