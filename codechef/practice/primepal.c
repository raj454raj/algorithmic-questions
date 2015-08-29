#include<stdio.h>
#include<math.h>
int pal(int n)
{
	int rev=0,tmp;
	int c=n;
	while(n)
	{
		tmp=n%10;
		rev=10*rev+tmp;
		n/=10;
	}	
	if(rev==c)
		return 1;
return 0;
}
int main()
{
int n,s,i,flag;

while(~(scanf("%d",&n)))
{
flag=0;
while(1)
{
n++;
s=sqrt(n);
flag=0;
for(i=2;i<=s;i++)
{
	if(n%i==0)
	{
		flag=1;
		break;
	}
}
if(flag==0&&pal(n)==1&&n!=1)
		break;
else if(flag==0&&pal(n)==1&&n==1)
{
	n++;
	break;
}
}
printf("%d\n",n);
}
	return 0;

}
