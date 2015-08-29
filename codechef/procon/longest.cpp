#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#define g getchar_unlocked
using namespace std;
int n;
void func(vector<int> &arr)
{
	vector<vector<int>> L(n);
	L[0].push_back(arr[0]);
	int j,max=0;
	for(int i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if((arr[j]<=arr[i])&&(L[i].size()<L[j].size()+1))
				L[i]=L[j];
		}
		L[i].push_back(arr[i]);
		if(L[i].size()>max)
			max=L[i].size();
	//	printf("%lu\n",L[i].size());
			
	}
	
	printf("%d\n",max);
}
int main()
{
	//n=readnum();
	scanf("%d",&n);
	int a[100005];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	vector<int> arr(a,a+sizeof(a)/sizeof(int));
	func(arr);
	return 0;
}
