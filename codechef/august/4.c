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
	int n,m,t,i,j,z,max,count,pos,flag;
	int a[405],b[405],c[405];
	//scanf("%d",&t);
	t=readnum();
	int tmp[405],tmppos[405];
	while(t--)
	{
		count=0;
		//scanf("%d%d",&n,&m);
		n=readnum();
		m=readnum();
		for(i=0;i<405;i++)
		{
				b[i]=0;
				c[i]=0;
				tmppos[i]=0;
				tmp[z]=0;
		}
		max=0;
		for(i=1;i<=m;i++)
		{
			//scanf("%d",&a[i]);
			a[i]=readnum();
			if(a[i]>max)
				max=a[i];
			if(b[a[i]]==0)
			{
				b[a[i]]=i;
			}
			else
			{
				c[b[a[i]]]=i;
				b[a[i]]=i;
			}
		}
		/*for(i=1;i<=m;i++)
		  printf("%d ",c[i]);
		*/
		z=0;
		for(i=1;i<=m;i++)
		{
			flag=0;
			if(z!=n)
			{
				flag=0;
				for(j=0;j<z;j++)
				{
					if(tmp[j]==a[i])
					{
						tmppos[j]=i;
						flag=1;
						break;
					}
				}
				if(!flag)
				{
					tmp[z++]=a[i];
					tmppos[z-1]=i;
					count++;
				}
			}
			else
			{
				max=-1;
				flag=0;
				for(j=0;j<z;j++)
				{
					if(tmp[j]==a[i])
					{
						tmppos[j]=i;
						flag=1;
						break;
					}
				}
				if(!flag)
				{
					for(j=0;j<z;j++)
					{
						if(c[tmppos[j]]==0)
						{
							pos=j;
							break;
						}
						else if(c[tmppos[j]]>max)
						{
							max=c[tmppos[j]];
							pos=j;
							if(max==0)
								break;
						}
					}
					tmp[pos]=a[i];
					tmppos[pos]=i;
					count++;
				}
			}
/*			printf("\n************************%d\n",count);
			for(j=0;j<z;j++)
				printf("%d ",tmp[j]);*/
//			printf("\n");
/*			for(j=0;j<z;j++)
				printf("%d ",tmppos[j]);
*/		}
		printf("%d\n",count);
	}
	return 0;
}
