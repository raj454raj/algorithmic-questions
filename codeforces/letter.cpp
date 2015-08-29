#include<iostream>
using namespace std;
int main()
{
	int a[52]={0},flag=0;
	char s1[200];
	char s2[200];
	cin.getline(s1,200);
	cin.getline(s2,200);
	int i;
	for(i=0;s1[i];i++)
	{
		if(s1[i]==' ')
		{
		}
		else if(s1[i]>='a'&&s1[i]<='z')
		{
			a[s1[i]-'a']++;
		}
		else
		{
			a[s1[i]-'A'+26]++;
		}
	}
	for(i=0;s2[i];i++)
	{
		if(s2[i]==' ')
		{
		}
		else if(s2[i]>='a'&&s2[i]<='z')
		{
			a[s2[i]-'a']--;
			if(a[s2[i]-'a']<0)
			{
				flag=1;
				break;
			}
		}
		else
		{
			a[s2[i]-'A'+26]--;
			if(a[s2[i]-'A'+26]<0)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	//cout<<s1<<endl<<s2;

	return 0;
}
