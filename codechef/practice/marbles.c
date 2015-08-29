#include<stdio.h>
#include<stdlib.h>
long long int **a;
long long int c(long long int n,long long int k)
{
	
	if(n==k||k==0)
		return a[n][k]=1;
	if(k==1)
		return n;
	if(k>n/2)
		k=n-k;
	if(a[n][k]!=0)
		return a[n][k];
	else
	{
		a[n][k]=c(n-1,k)+c(n-1,k-1);
		return a[n][k];
	}

}
int main()
{
	long long int n,k,t,f,i,j;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		a=(long long int **)malloc((n+2)*sizeof(long long int *));
		for(i=0;i<=n;i++)
			*(a+i)=(long long int *)malloc((k+2)*sizeof(long long int));
		for(i=0;i<=n;i++)
			for(j=0;j<=k;j++)
				a[i][j]=0;
		f=c(n-1,k-1);
		printf("%lld\n",f);
	}
	return 0;
}
