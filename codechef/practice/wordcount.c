#include<stdio.h>
#define M 1000000007
long long int ar[1000000]={0};
unsigned long long int fib(int n)
{
	if(n==0)
	{
		ar[n]=1;
		return 1;
	}
	else if(n==1||n==2)
	{
		ar[n]=n;
		return n;
	}
	else if(ar[n]!=0)
		return ar[n]%M;
	else
	{
		if(n<1000000)
		{
			ar[n]=(n*fib(n-1))%M;
			return ar[n];
		}	
		return (n*fib(n-1))%M;
	}	

}
int main()
{
	int t;
	char str[501],c;
	scanf("%d",&t);
	getchar();
	unsigned long long int x;
	int i,count1,count2;
	while(t--)
	{
		int a[52]={0};
		count1=0;
		count2=0;
		scanf("%s",str);
		for(i=0;str[i];i++)
		{
			if(str[i]>='a'&&str[i]<='z')
				a[str[i]-'a']++;
			else if(str[i]>='A'&&str[i]<='Z')
				a[str[i]-'A'+26]++;
		}
		count1=i;
		x=fib(count1);
		
		//printf("%llu",x);
		for(i=0;i<52;i++)
		{
			if(a[i]>1)
			{
				x/=fib(a[i]);
			}
		}
		printf("%llu\n",x);
	}
	return 0;
}


