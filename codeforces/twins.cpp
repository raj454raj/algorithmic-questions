#include<iostream>
#include<stdlib.h>
using namespace std;
int compare(const void *a, const void *b)
{
	return *(int *)a<*(int *)b;
}
int main()
{
	int n,i;
	int a[101];
	int sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i]=0;
		cin>>a[i];
		sum+=a[i];
	}
	qsort(a,n,sizeof(int),compare);
	i=0;
	int tmpsum1=0,tmpsum2=0;
	while(1)
	{
		if(tmpsum1>tmpsum2)
			break;
		tmpsum1+=a[i];
		tmpsum2=sum-tmpsum1;
		i++;
	}
	cout<<i;
	return 0;
}
