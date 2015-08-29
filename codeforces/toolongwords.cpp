#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		int l=s.size();
		if(l>10)
		{
			cout<<s[0];
			cout<<l-2;
			cout<<s[l-1]<<endl;
		}
		else
			cout<<s<<endl;
	}
	return 0;
}
