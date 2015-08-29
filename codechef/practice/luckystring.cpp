#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int k,n;
	cin>>k>>n;
	string tmp;
	vector<string> vec;
	while(k--)
	{
		cin>>tmp;
		vec.push_back(tmp);
	}
	vector<string>::iterator itr;
	/*for(itr=vec.begin();itr!=vec.end();++itr)
	{
		cout<<*itr<<endl;
	}*/
	int l,flag=0;
	while(n--)
	{
		flag=0;
		cin>>tmp;
		l=tmp.size();
		if(l>=47)
			cout<<"Good\n";
		else
		{
			for(itr=vec.begin();itr!=vec.end();++itr)
			{
				//cout<<*itr<<" "<<tmp.find(*itr)<<endl;
				if(tmp.find(*itr)<l)
				{
					cout<<"Good\n";
					flag=1;
					break;
				}
			}
			if(!flag)
				cout<<"Bad\n";
			//tmp.find(*);
		}
	}
	return 0;
}
