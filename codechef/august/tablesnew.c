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
	int tmpcount,tor,n,m,t,i,j,z,flag,count,min,b[405],k,a[205],c[405],tmp;
	t=readnum();
	int ina[205];
	int max,tmpmax;
	while(t--)
	{
		flag=0;count=0;
		n=readnum();
		m=readnum();
		for(i=0;i<n+4;i++)
		{
			a[i]=0;
			ina[i]=0;
		}
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
					ina[a[z-1]]=1;
					count++;
				}
			}
			else if(z==n&&!flag2)
			{
				min=410;tmpcount=0;
				for(j=i+1;j<m;j++)
				{
					if(ina[b[j]]&&tmpcount!=n)
					{
						tmpcount++;
						tor=j;
					}
				}
					/*for(j=0;j<z;j++)
					  {
					  if(c[a[j]]<min)
					  {
					  min=c[a[j]];
					  tmp=j;
					  }
					  }*/
				a[tor]=b[i];

				count++;
			}

				//printf("\n******************%d*************\n",count);
				//printf("********a*******\n");
				for(j=0;j<z;j++)
					printf("%d ",a[j]);
				printf("\n");
				//printf("\n********c*******\n");
				//for(j=1;j<=5;j++)
				//	printf("%d ",c[j]);


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
