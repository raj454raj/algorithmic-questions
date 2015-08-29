#include<stdio.h>
int main()
{
int a,f=1;
while(f==1)
{
	scanf("%d",&a);
	if(a==42||a>99)
		break;
	else
		printf("%d\n",a);
}
	return 0;
}
