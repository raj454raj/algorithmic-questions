#include<stdio.h>
#define g getchar_unlocked
int readnum()
{
	int n=0;
	char c=g();
	while(c<'0'||c>'9')c=g();
	while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
	return n;
}

int main()
{
	int n,m,t,i,j,z,flag,count,b[405],a[205],c[405];
	t=readnum();
	while(t--)
	{
		flag=0;count=0;
		n=readnum();
		m=readnum();
		for(i=0;i<n+4;i++)
				a[i]=0;
		for(i=0;i<402;i++)
			c[i]=0;
		for(i=1;i<=m;i++)
		{
			b[i]=readnum();
			c[b[i]]++;
		}
		z=0;int flag2;
		for(i=1;i<=m;i++)
		{
			flag=0;flag2=0;
			c[b[i]]--;
			for(j=0;j<z;j++)
			{
				if(a[j]==b[i])
				{
					flag2=1;
					break;
				}
			}
			if(z!=n&&!flag2)
			{
				for(j=0;j<z;j++)
				{
					if(a[j]==b[i])
					{	
						flag=1;
						break;
					}
				}
				if(!flag)
				{
					a[z++]=b[i];
					count++;
				}
			}
			else if(z==n&&!flag2)
			{
				for(j=0;j<z;j++)
				{
					if(c[a[j]]==0)
					{
						a[j]=b[i];
						count++;
						break;
					}
				}
			}
			printf("\n******************%d*************\n",count);
			printf("********a*******\n");
			for(j=0;j<z;j++)
				printf("%d ",a[j]);
			printf("\n********c*******\n");
			for(j=1;j<=5;j++)
				printf("%d ",c[j]);

			
		}
		/*printf("********a*******\n");
		for(i=1;i<=z;i++)
			printf("%d ",a[i]);
		printf("\n********c*******\n");
		for(i=1;i<=400;i++)
			if(c[i])
				printf("%d ",c[i]);
		printf("\n");
		*/
		printf("%d\n",count);
	}
	return 0;
}
