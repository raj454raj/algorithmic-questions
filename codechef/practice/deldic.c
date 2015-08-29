#include<stdio.h>
#include<string.h>
int main()
{

	int t,z,flag=0,b[10];
	long long int l,r,i,num,count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%lld%lld",&l,&r);
		if(r>9876543210)
			r=9876543210;
		for(i=l;i<=r;i++)
		{
			flag=0;
			if(i%11==0||i%100==0)
				continue;
			num=i;
			z=0;
			memset(b,0,10*sizeof(int));
			while(num)
			{
				if(b[num%10]==1)
				{
					flag=1;
					break;	
				}
				b[num%10]=1;
				num/=10;
			}
		if(flag==0)
			count++;

		}
	printf("%lld\n",count);
	}
	return 0;
}
