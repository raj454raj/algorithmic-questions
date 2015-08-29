#include<stdio.h>
int main()
{
	int b,tmp,x;
	int t,r,m,z=0,i,temp=0,index=0;
	scanf("%d",&t);
	while(t--)
	{
		z=0;temp=0;index=0;
		int a[200]={0};
		scanf("%d%d",&tmp,&b);
		while(tmp)
		{
			a[z++]=tmp%10;
			tmp/=10;
		}

		m=z;
		while(m--)
		{
		x=a[index]*b+temp;
		a[index]=x%10;
		temp=x/10;
		index++;
		}
		while(temp)
		{
			a[index++]=temp%10;
			temp/=10;
		}
		for(i=index-1;i>=0;i--)
			printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}
