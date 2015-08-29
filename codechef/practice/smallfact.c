#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void fact(int n)
{
	if(n==1||n==0)
	{
	printf("1\n");
		return;
	}
	int a=1,b=n,m=0,x,tmp,index,i;
	int ar[200],z=0;
	while(n)
	{
		z=0,tmp=0;index=0;
		while(b!=0)
		{
			ar[z++]=b%10;
			b/=10;
		}
	while(index!=z)
	{
		x=ar[index]*a+tmp;
		ar[index]=x%10;
		tmp=x/10;
		index++;
	}
	while(tmp!=0)
	{
		ar[index++]=tmp%10;
		tmp/=10;
	}
	if(m<index)
		m=index;
	a=0;
	for(i=0;i<m;i++)
	{
		a+=pow(10,i)*ar[i];
	}
	for(i=0;i<m;i++)
		printf("%d\n",ar[i]);
	n--;
	}
}
int main()
{
	int n,t;
		scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		fact(n);
	}
	return 0;
}
