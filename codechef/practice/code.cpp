#include<iostream>
#include<stdio.h>
#define g getchar_unlocked
using namespace std;

int readnum()
{

	char c=g();
	while(c<'0'||c>'9')c=g();
	int num=0;
	while(c>='0'&&c<='9')
	{
		num=num*10+c-'0';
		c=g();
	}
	return num;
}
int main()
{
	int n,k,temp,ans,t,i,x,a,o;
	//cin>>t;
	//scanf("%d",&t);
	t=readnum();
	char str[5];
	while(t--)
	{
		//cin>>n>>k>>ans;
		//scanf("%d%d%d",&n,&k,&ans);
		n=readnum();k=readnum();ans=readnum();
		x=ans;
		o=ans;
		a=ans;
		for(i=0;i<n;i++)
		{
			//cin>>temp;
			scanf("%d",&temp);
			x=x^temp;
			a=a&temp;
			o=o|temp;
		}
		getchar();
		scanf("%s",str);
		//cin>>str;
		switch(str[0])
		{
			case 'X':
				{
					if(k%2==0)
						printf("%d\n",ans);
						//cout<<ans<<endl;
					else
						printf("%d\n",x);
						//cout<<x<<endl;
					break;
				}
			case 'O':
				{
					if(k==0)
						printf("%d\n",ans);
						//cout<<ans<<endl;
					else 
						printf("%d\n",o);
						//cout<<o<<endl;
					break;
				}
			case 'A':
				{
					if(k==0)
						printf("%d\n",ans);
						//cout<<ans<<endl;
					else
						printf("%d\n",a);
						//cout<<a<<endl;
				}
		}
		/*if(str[0]=='X')
		{
			if(k%2==0)
				cout<<ans<<endl;
			else
				cout<<x<<endl;
		}
		if(str[0]=='A')
		{
			if(k==0)
				cout<<ans<<endl;
			else 
				cout<<a<<endl;
		}
		if(str[0]=='O')
		{
			if(k==0)
				cout<<ans<<endl;
			else 
				cout<<o<<endl;
		}*/
	}
	return 0;
}
