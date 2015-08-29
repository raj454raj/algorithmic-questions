#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	vector<int> vec;
	int t=x+y+z,tmp;
	set<int> myset;
	set<int>::iterator it,i;
	while(t--)
	{
		cin>>tmp;
		vec.push_back(tmp);
		myset.insert(tmp);
	}
		
	vector<int> mainvec;
	sort(vec.begin(),vec.end());
	int cnt,maincount=0;
	for(i=myset.begin();i!=myset.end();++i)
	{
		cnt=count(vec.begin(),vec.end(),*i);
		//cout<<*i<<" "<<cnt<<endl;
		if(cnt>=2)
		{
			mainvec.push_back(*i);
			maincount++;
		}
	}
	cout<<maincount<<endl;
	for(vector<int>::iterator iter=mainvec.begin();iter!=mainvec.end();++iter)
	{
		cout<<*iter<<endl;
	}
	
	return 0;
}
