#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	//char str[200];
	string s;
	cin>>s;
	int at=count(s.begin(),s.end(),'@');
	int l=s.size();
	if((l-at)-at<1)
		cout<<"No Solution";
	
	return 0;
}
