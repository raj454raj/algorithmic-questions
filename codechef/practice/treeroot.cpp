#include<iostream>
using namespace std;
int main()
{
	int t,n,x,y,sumx,sumy;
	cin>>t;
	while(t--)
	{
		sumx=0;
		sumy=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			sumx+=x;
			sumy+=y;
		}
		cout<<sumx-sumy<<endl;
	}
	return 0;
}
