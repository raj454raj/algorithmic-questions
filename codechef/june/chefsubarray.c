#include<stdio.h>
int main()
{
	int tempcount = 0;
	int max = 0,x,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x == 0)
		{
			if(tempcount > max)
				max = tempcount;
			tempcount=0;
		}
		else 
			tempcount++;
	}
	if(tempcount > max)
		max = tempcount;
	printf("%d\n",max);
	return 0;
}
