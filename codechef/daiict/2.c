#include<stdio.h>
#define mod 1000000007
void mult(long long int x[][2],long long int y[][2])
{
	int i,j,k;
	long long int z[2][2]={0};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			z[i][j]=0;
			for(k=0;k<2;k++)
			{
				z[i][j]=(z[i][j]+(x[i][k]*y[k][j])%mod)%mod;
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			y[i][j]=z[i][j];
	}
}
void power(long long int a[][2],long long int n)
{
	long long int tmp[2][2]={1,1,1,0};
	if(n==1)
		return;
	power(a,n/2);
	mult(a,a);
	if(n&1)
		mult(tmp,a);
}
long long int notiles(long long int n)
{
	long long int res;
	long long int a[2][2]={1,1,1,0},b[2][1]={2,1};
	if(n==1||n==2)
		return n;
	long long int ans=0;
	int i;
		power(a,n-2);
		for(i=0;i<2;i++)
			ans+=(a[0][i]*b[i][0]);
		return ans;
}

int main()
{
	int t;
	long long int n,res;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		res=notiles(n);
		printf("%lld\n",res);
	}
	return 0;
}
