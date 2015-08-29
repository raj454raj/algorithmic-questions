#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,query,l,r;
	scanf("%d",&n);
	int *b=(int *)malloc(n*sizeof(int));
	int *pos=(int *)malloc(n*sizeof(int));
	int i,j,max=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		if(b[i]>max)
			max=b[i];
	}
	int z=0,flag1=0,flag2=0;
	float tmp;
	for(i=0,j=n-1;;i++,j--)
	{
		if(max==b[i]&&flag1==0)
		{
			pos[0]=i;
			flag1=1;	
		}
		if(max==b[j]&&flag2==0)
		{
			pos[1]=j;
			flag2=1;
		}
		if(flag1==1&&flag2==1)
			break;
	}

	scanf("%d",&query);
	int min,p,q;
	for(j=0;j<query;j++)
	{
		scanf("%d%d",&l,&r);
		min=b[l];
		for(i=l;i<=r;i++)
			if(b[i]<min)
				min=b[i];
		if(pos[0]<l||pos[1]>r)
			printf("%.1f\n",(float)(max+min));
		else
		{
			tmp=(max-min)/2.0;
			p=0;
			q=n-1;
			while(1)
			{
				if(p<l)
				{	if(b[p]>tmp)
						tmp=b[p];
				p++;
				}
				if(q>r)
				{
					if(b[q]>tmp)
						tmp=b[q];
				q--;
				}
			if(p==l&&q==r)
				break;
			}
			printf("%0.1f\n",min+tmp);
		}
	}
	return 0;
}
