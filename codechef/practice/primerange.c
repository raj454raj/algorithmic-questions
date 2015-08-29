#include<stdio.h>
#include<math.h>
#include<string.h>
#define g getchar_unlocked
int prime[10000];
int notprime[100000]={0};
int z=0,i,j;
int readnum()
{
	int n=0;
	char c=g();
	while(c<'0'||c>'9')c=g();
	while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
	return n;
}
void seive()
{
	notprime[0]=1;
	notprime[1]=1;
	for(i=2;i<100000;i++)
	{
		if(notprime[i]==0)
		{
			prime[z++]=i;
			for(j=i+i;j<100000;j+=i)
				notprime[j]=1;
		}
	}

}
int main()
{
	seive();
/*	for(i=0;i<1000;i++)
		printf("%d ",prime[i]);
*/	int m,n,t,i,sq,flag;
	//scanf("%d",&t);
	//t=readnum();
	for(i=0;i<10000;i++)
        printf("%d\n",prime[i]);
    while(t--)
	{
		//scanf("%d%d",&m,&n);
		m=readnum();
		n=readnum();
		if(m<=2)
		{
			printf("2\n");
			m=3;
		}
		else if(m%2==0)
			m=m+1;
		for(i=m;i<=n;i+=2)
		{
			flag=0;
			sq=sqrt(i);
			for(j=1;prime[j]<=sq;j++)
			{
				if(i%prime[j]==0)
				{
					flag=1;
					break;
				}
			
			}
		if(flag==0)
			printf("%d\n",i);
		}
	}
	return 0;
}
