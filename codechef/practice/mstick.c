#include<stdio.h>
#include<stdlib.h>

void maximum(float a, float b, float c)
{
	float max=a;
	if(b-max>0.0001)
		max=b;
	if(c-max>0.0001)
		max=c;
	printf("%.1f\n",max);
}
int main()
{
	int r,l,q,n,i;
	scanf("%d",&n);
	int *b=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	scanf("%d",&q);
	int max1,j,max2,maxb,minb;
	float max3;
	for(j=0;j<q;j++)
	{
		scanf("%d%d",&l,&r);
		if(l==0&&r==n-1)
		{
			max1=0;
			max2=0;
		}
		else
		{
			max1=b[0];
			max2=b[r+1];
		}
		for(i=0;i<l;i++)
		{
			if(b[i]>max1)
				max1=b[i];
		}
		maxb=b[l];
		minb=b[l];

		for(i=l;i<=r;i++)
		{
			if(b[i]>maxb)
				maxb=b[i];
			if(b[i]<minb)
				minb=b[i];
		}
		max3=minb+((maxb-minb)/2.0);
		for(i=r+1;i<n;i++)
			if(b[i]>max2)
				max2=b[i];
		maximum((float)(minb+max1),(float)(minb+max2),max3);
	}
	return 0;
}
