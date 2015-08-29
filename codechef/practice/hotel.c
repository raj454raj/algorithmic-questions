#include<stdio.h>
struct cust
{
	int arr;
	int dep;
};
typedef struct cust cust;
int main()
{
	int n,t,min,pos,count;
	scanf("%d",&t);
	while(t--)
	{
		min=1001;
		count=0;
		scanf("%d",&n);
		cust *s=(cust *)malloc(n*sizeof(cust));
		for(i=0;i<n;i++)
		{
			scanf("%d",&s[i].arr);
			scanf("%d",&s[i].dep);
			if(s[i].arr<min)
			{
				min=s[i].arr;
				pos=i;
			}
		}
		i=0;
		while(min<s[pos].dep)
		{
			{
			
			}
			min++;
		}
	}

	return 0;
}
