#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int getmax(int arr[])
{
	int max=0;
	for(int i=0;i<26;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		arr[i]=0;
	}
	return max;
}
int main()
{
	int t,i,hashes,l,segment,arr[26],j;
	scanf("%d",&t);
	int first,second,third,fourth,flag;
	string str;
	int seg[10004];
	while(t--)
	{
		first=second=third=fourth=0;
		//scanf("%s",str);
		for(i=0;i<26;i++)
			arr[i]=0;
		cin>>str;
		hashes=0;
		for(i=0;str[i];i++)
		{
			if(str[i]=='#')
				hashes++;
		}
		if(hashes<3)
		{
			cout<<"0\n";
		}
		else
		{
			flag=0;
			for(i=0;i<=hashes;i++)
				seg[i]=0;
			l=i-1;
			segment=0;
			for(i=0;str[i];i++)
			{
				if(str[i]>='a'&&str[i]<='z')
					arr[str[i]-'a']++;		

				if(str[i]=='#'||str[i+1]=='\0')
				{
					seg[segment]=getmax(arr);
					if(seg[segment]<1)
					{
						flag=1;
						break;
					}
					if(seg[segment]>first)
					{
						fourth=third;
						third=second;
						second=first;
						first=seg[segment];
					}
					else if(seg[segment]>second)
					{
						fourth=third;
						third=second;
						second=seg[segment];
					}
					else if(seg[segment]>third)
					{
						fourth=third;
						third=seg[segment];
					}
					else if(seg[segment]>fourth)
						fourth=seg[segment];
					segment++;
				}
			}
			if(!flag)
				cout<<first+second+third+fourth+3<<endl;
			else
				cout<<"0\n";
		}
	}
	return 0;
}
