#include<stdio.h>
#define g getchar_unlocked
int readnum()
{
	int n=0;
	char c=g();
	while(c<'0'&&c>'9')c=g();
	while(c>='0'&&c<='9')n=(n<<1)+(n<<3)+c-'0',c=g();
	return n;
}
int main()
{
	int x,y,i,j,x1,y1,x2,y2,n;
	int a[302][302]={0},b[302][302]={0};
	//scanf("%d",&n);
	n=readnum();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			a[i][j]=readnum();
			//scanf("%d",&a[i][j]);
			//b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+a[i][j];
		}
	}
	int q,distinct,tmp,flag;
	//scanf("%d",&q);
	q=readnum();
	while(q--)
	{
		distinct=0;
		//scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		x1=readnum();y1=readnum();x2=readnum();y2=readnum();
		for(tmp=1;tmp<=10;++tmp)
		{
			flag=0;
			for(x=x1;x<=x2;x++)
			{
				for(y=y1;y<=y2;y++)
				{
					if(tmp==a[x][y])
					{
						distinct++;
						flag=1;
						break;
					}
				}
				if(flag)
					break;
			}
		}
		printf("%d\n",distinct);
	}
	return 0;
}
