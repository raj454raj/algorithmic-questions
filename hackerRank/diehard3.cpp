#include<iostream>
using namespace std;
int gcd(int x,int y)
{
	if(y<=x && x%y==0)
		return y;
	if(x<y)
		return gcd(y,x);
	else
		return gcd(y,x%y);
}

int main()
{
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z;
		if(z>x && z>y)
			cout<<"NO\n";
		else if(z%gcd(x,y)==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}
	return 0;
}
