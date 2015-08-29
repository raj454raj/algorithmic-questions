#include<iostream>
using namespace std;
long long int a[35][35]={0};
long long int c(int n,int r)
{
	if(a[n][r])
		return a[n][r];
	if(r==0)
	{	
		a[n][r]=1;
		return 1;
	}
	else if(r==1)
	{
		a[n][r]=n;
		return n;
	}
	else if(r==n)
	{
		a[n][r]=1;
		return 1;
	}
	else
	{
		long long int x=c(n-1,r)+c(n-1,r-1);
		a[n][r]=x;
		return x;
	}
}
int main()
{
	int n,m,t;
	cin>>n>>m>>t;

	long long int x=0;
	int b,g;
	b=4;
	//x=c(10,10);
	while(1)
	{
		g=t-b;
		if(g<1)
			break;
		else
		{
			if(n>=b&&m>=g)
				x+=c(n,b)*c(m,g);
		}
		//cout<<b<<" "<<g<<endl;
		b++;
	}
	cout<<x;
	return 0;
}
