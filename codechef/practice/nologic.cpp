#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t,i,space,flag;
	scanf("%d",&t);
	getchar();
	char c;
	
	while(t--)
	{
		space=0;
		flag=0;
		int a[26]={0};
		scanf("%c",&c);
		while(c!='\n')
		{
			if(c==' ')
				space++;
			else if(c>='a'&&c<='z')
				a[c-'a']++;
			else if(c>='A'&&c<='Z')
				a[c-'A']++;
			scanf("%c",&c);
		}
		for(i=0;i<26;i++)
		{
			if(!a[i])
			{
				printf("%c",i+97);
				flag=1; //means we dont have to print ~
				break;
			}
		}
		if(!flag)
			cout<<"~";
		cout<<endl;
			//printf("\n");

		//cin.getline(str,315);

	}
	return 0;
}
