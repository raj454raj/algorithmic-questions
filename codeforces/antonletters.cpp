#include<iostream>
#include<ctype.h>
#include<stdio.h>
using namespace std;
int main()
{
	int i,a[26]={0};
	char c;
	int count=0;
	while((c=getchar())!='\n')
	{
		if(c=='{'||c=='}'||c==' '||c==',')
			continue;
		else
		{
			a[c-'a']++;
			if(a[c-'a']==1)
				count++;
		}
	}
	cout<<count;
	return 0;
}
