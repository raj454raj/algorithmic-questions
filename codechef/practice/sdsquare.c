#include<stdio.h>
#include<math.h>
int arr[1000002];
int checkthis(long long int n)
{
	int tmp;
	while(n)
	{
		tmp=n%10;
		if(tmp!=0&&tmp!=1&&tmp!=4&&tmp!=9)
			return 0;
		n/=10;
	}
	return 1;
}
int main()
{
	long long int i,t,a,b,sq;
	long long int count=0;
	scanf("%lld",&t);
	for(i=0;i<=1000000;i++)
	{
		if(checkthis(i*i))	
			count++;
		arr[i]=count;
	}
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		a=ceil(sqrt(a));
		b=floor(sqrt(b));
		printf("%d\n",arr[b]-arr[a-1]);
	}
	return 0;
}
