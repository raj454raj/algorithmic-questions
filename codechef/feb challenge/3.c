#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct num
{
	int no;
	int flag;
	int index;
};
typedef struct num num;
int n;
int mid;
int compare(const void *x,const void *y)
{
	num *p=(num *)x;
	num *q=(num *)y;
	if(p->no>q->no)
		return 1;
	else if(p->index>=mid && q->index>=mid && p->no==q->no)
		return p->index<q->index;
	else if(p->no==q->no)
		return p->index>q->index;
	return 0;
}
int max(int a,int b)
{
	if(a>=b)
		return a;
	return b;
}
int cmp(const void *a,const void *b)
{
	return *(int *)a>*(int *)b;
}
int main()
{
	int k,pos;
	scanf("%d%d",&n,&k);
	int i,mid;
	int min=INT_MIN;
	num *a,*b,*c;
	int *d;
	int flag=1;
		mid = n/2;
	a=(num *)malloc((n+1)*sizeof(num));
	b=(num *)malloc((n+1)*sizeof(num));
	d=(int *)malloc((n)*sizeof(int));

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i].no);
		a[i].flag=0;
	/*	if(a[i].no>min&&a[i].no<k)
		{
			min=a[i].no;
			pos=i;
		}
	*/	a[i].index=i;
		b[i]=a[i];
	}
	qsort(b,n,sizeof(num),compare);
	int j,x,z=0,tmp=0;
	for(i=0,j=n-1;i<n,j>=0;)
	{
		if(b[i].no+b[j].no>k)
			j--;
		else if(b[i].no+b[j].no<k)
			i++;
		else if(b[i].no+b[j].no==k && n&1&&b[i].no!=b[j].no)
		{
			if(b[i].index>n/2&&b[j].index>n/2)
			{
				x=max(n-b[i].index-1,n-b[j].index-1);
					if(flag==0)
						flag=1;
					d[z++]=x+1;
					tmp=1;

			}
			else if(b[i].index>n/2)
			{
				x=max(n-b[i].index-1,b[j].index);
					if(flag==0)
						flag=1;
				       
					d[z++]=x+1;
					tmp=1;

			}
			else if(b[j].index>n/2)
			{
				x=max(b[i].index,n-b[j].index-1);
					if(flag==0)
						flag=1;
					d[z++]=x+1;
					tmp=1;
			}
			else
			{
				x=max(b[i].index,b[j].index);
					if(flag==0)
						flag=1;
					d[z++]=x+1;
					tmp=1;


			}
			j--;
		}
		else if(b[i].no+b[j].no==k&&b[i].no!=b[j].no)
		{
			if(b[i].index>=n/2&&b[j].index>=n/2)
			{
				x=max(n-b[i].index-1,n-b[j].index-1);
					if(flag==0)
						flag=1;
					d[z++]=x+1;
					tmp=1;

			}
			else if(b[i].index>=n/2)
			{
				x=max(n-b[i].index-1,b[j].index);
					if(flag==0)
						flag=1;
					d[z++]=x+1;
					tmp=1;

			}
			else if(b[j].index>=n/2)
			{
				x=max(b[i].index,n-b[j].index-1);
					if(flag==0)
						flag=1;
					d[z++]=x+1;
					tmp=1;
			}
			else
			{
				x=max(b[i].index,b[j].index);
					if(flag==0)
						flag=1;
					d[z++]=x+1;
					tmp=1;

			}
			j--;	
		}
		else
		{
			flag=0;
			j--;
		}
	}
	if(flag==0)
	{
		printf("-1\n");
		return 0;
	}
	qsort(d,z,sizeof(int),cmp);
	printf("%d\n",d[0]);

	return 0;
}
