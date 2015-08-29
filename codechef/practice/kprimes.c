#include<stdio.h>
#include<string.h>
int prime[100000];
int notprime[1000000]={0};
int z=0,i,j;
void seive()
{
	notprime[0]=1;
	notprime[1]=1;
	for(i=2;i<1000000;i++)
	{
		if(notprime[i]==0)
		{
			prime[z++]=i;
			for(j=i+i;j<1000000;j+=i)
				notprime[j]=1;
		}
	}

}
int main()
{
	seive();
//	printf("%d\n",z);
	for(i=0;i<1000;i++)
		printf("%d ",prime[i]);

/*	int t,a,b,k,ar[3126],count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		memset(ar,0,3126*sizeof(int));
		scanf("%d%d%d",&a,&b,&k);
		for(i=a;i<=b;i++)
		{
			for(j=0;j<450;j++)
			{
				if(i<prime[j])
					break;
				if(i%prime[j]==0)
				{
					ar[prime[j]]++;
					if(ar[prime[j]]==1)
						count++;
				}
			}
		}
		printf("%d\n",count);
	}
*/	return 0;
}
