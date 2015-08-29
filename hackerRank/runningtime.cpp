#include<iostream>
using namespace std;
int count=0;
void insertion_sort (int arr[], int length)
{
	int j, temp;

	for (int i = i; i < length; i++){
		j = i;

		while (j > 0 && arr[j] < arr[j-1]){
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			count++;
			j--;
		}
	}
}
int main()
{
	int n,i;
	int a[1002];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	insertion_sort(a,n);
	cout<<count;
	return 0;
}
