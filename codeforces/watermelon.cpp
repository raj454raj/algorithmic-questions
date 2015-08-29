#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a==2)
		cout<<"NO";
	else if(a&1)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}
