#include<iostream>
using namespace std;
int min(int a,int b)
{
	if(a<b)
		return a;
	return b;
}
int main()
{
	int n,x,y;
	int count=0;
	int a[4]={0};
	cin>>n;
	while(n--)
	{
		cin>>x;
		a[x-1]++;
	}
	count+=a[3];
	//cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
	//cout<<"*"<<a[3]<<"*";
	int min1=min(a[0],a[2]);
	count+=min1;
	//cout<<"*"<<min1<<"*";
	a[0]-=min1;
	a[2]-=min1;
	a[3]=0;
	//count+=a[1]/2;
	//cout<<"*"<<a[1]/2<<"*";
//	a[1]=a[1]%2;
	cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
	x=a[0]|a[1]|a[3];	
	//cout<<x;
	y=a[1]|a[2]|a[3];
	if((x==0))//&&a[2])
	{
		count+=a[2];
//		cout<<"888888888888888888888888888888888\n";
	//	cout<<"*"<<a[2]<<"*";
	}
	else if((x)==1)// && a[2])
	{
		count+=a[2]+1;
//		cout<<"777777777777777777777777777777777\n";
	//	cout<<"*"<<a[2]<<"*";
	}
	else if((y)==0)//&&a[0])
	{
//		cout<<"444444444444444444444444444444444\n";
		count+=a[0]/4+a[0]%4;
	//	cout<<"*"<<a[0]/4+a[0]%4<<"*";
	}
	else if(y==1)//&&a[0])
	{
//		cout<<"555555555555555555555555555555555\n";
		if(a[0]>=2)
		{
			a[0]-=2;
			count+=a[0]/4+a[0]%4+1;
	//		cout<<"*"<<a[0]/4+a[0]%4+1;
		}
		else
			count++;
	}
	cout<<count;
	return 0;
}

