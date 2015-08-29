#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	int i,count;
	while(t--)
	{
		i=1;
		cin>>n;
		count=1;
		
		if(n)
		{
			while(i!=n+1)
			{
				if(i&1)
				{
					count*=2;		
				}
				else
				{
					count++;
				}
				i++;
			}
			cout<<count<<endl;
		}
		else
			cout<<count<<endl;
	}
}
