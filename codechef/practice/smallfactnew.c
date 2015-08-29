#include<stdio.h>
int main()
{
	int b,tmp,x,N,n;
	int t,r,m,i,temp=0,index=0;
	scanf("%d",&t);
	while(t--)
	{
		temp=0;index=0;
		int a[200]={0};
		scanf("%d",&n);
	
		a[0]=1;index=1;
		for(i=1;i<=n;i++)
		{
			m=index;
			index=0;
			while(m--)
			{
				x=a[index]*i+temp;
				a[index]=x%10;
				temp=x/10;
				index++;
			}
			while(temp)
			{
				a[index++]=temp%10;
				temp/=10;

			}
		}
		for(i=index-1;i>=0;i--)
			printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}
