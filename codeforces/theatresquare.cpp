#include<iostream>
using namespace std;
int main()
{
	long long int n,m,a;
	cin>>n>>m>>a;
	long long int count=0;
	long long int tmp1,tmp2;
	tmp1=n/a;
	tmp2=m/a;
	count+=tmp1*tmp2;
	if(n%a && m%a)
	{
		count+=tmp1+tmp2+1;
	}
	else if(n%a!=0)
	{
		count+=tmp2;
	}
	else if(m%a!=0)
	{
		count+=tmp1;
	}
	cout<<count;
	return 0;
}
