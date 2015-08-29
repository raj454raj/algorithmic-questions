#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[101];
	int flag=0,i;
	int count=0;
	cin.getline(str,101);
	if(strlen(str)==1)
		flag=1;
	else if(strlen(str))
	{
		if(str[0]>='a'&&str[0]<='z')
		{
			count=0;
			for(i=1;str[i];i++)
			{
				if(str[i]>='A'&&str[i]<='Z')
				{
					flag=2;
					continue;
				}
				else
				{
					count++;
				}
			}
			if(count)
				flag=0;
			else if(flag==2)
				flag=1;
		}
		else
		{
			count=0;
			for(i=1;str[i];i++)
			{
				if(str[i]>='A'&&str[i]<='Z')
				{
					flag=2;
					continue;
				}
				else
				{
					count++;
				}
			}
			if(count)
				flag=0;
			else if(flag==2)
				flag=1;

		}
	}
	if(flag==1)
	{
		for(i=0;str[i];i++)
		{
			if(str[i]>='a'&&str[i]<='z')
				str[i]-=32;
			else
				str[i]+=32;
		}
	}
	cout<<str;
	return 0;
}
