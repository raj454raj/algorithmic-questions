#include<stdio.h>
int main()
{
	int n,i,flag;
	int a[100001];
	scanf("%d",&n);
	while(n!=0)
	{
		flag=0;
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(i=1;i<=n;i++)
		{
			if(a[a[i]]!=i)
			{
				flag=0;
				break;
			}
			else
				flag=1;
		}
		if(flag==0)
			printf("not ambiguous\n");
		else
			printf("ambiguous\n");
		scanf("%d",&n);
	}
	return 0;
}
