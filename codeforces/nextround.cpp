#include<iostream>
using namespace std;
int main()
{
	int n,k,x,tmp=-1;
	int count=0,flag=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if((tmp==x&&x>0)||(!flag&&x>0))
			count++;
		
		//cout<<count<<" \n";
		if(count==k&&!flag)
		{
			flag=1;
			tmp=x;
		}
	}
	cout<<count;
	return 0;
}
