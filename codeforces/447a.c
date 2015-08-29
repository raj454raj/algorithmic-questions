#include<stdio.h>
#define g getchar_unlocked
int readnum()
{
	int n=0;
	char c=g();
	while(c<'0'||c>'9')c=g();
	while(c>='0'&&c<='9')n=(n<<1)+(n<<3)+c-'0',c=g();
	return n;
}
int main()
{
	int n,p,i;
	p=readnum();n=readnum();
	//scanf("%d%d",&p,&n);
	int a[301]={-1};
	for(i=0;i<301;i++)
		a[i]=-1;
	i=1;
	int x,count=0,flag=0,pos;
	int n1=n;
	while(n--)
	{
		x=readnum();
		//scanf("%d",&x);
		if(a[x%p]==-1&&!flag)
		{
			a[x%p]=x;
			count++;
		}
		else if(!flag)
		{
			flag=1;
			pos=i;
		}
		i++;
	}
	if(count==n1)
		printf("-1");
		//cout<<"-1";
	else
		printf("%d",pos);
		//cout<<pos;
	return 0;
}

