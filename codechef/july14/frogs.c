#include<stdio.h>
struct frog
{
	int index;
	int coordinate;
};
typedef struct frog frog;
int compare(const void *a,const void *b)
{
	frog *p=(frog *)a;
	frog *q=(frog *)b;
	return p->coordinate>q->coordinate;
}
int maximum(int a,int b)
{
	if(a>b)
		return 1;
	return 2;
}
int main()
{
	int i,n,k,p,x,y,max,mainflag;
	scanf("%d%d%d",&n,&k,&p);
	frog arr[n],brr[n];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i-1].coordinate);
		arr[i-1].index=i;
		brr[i-1]=arr[i-1];
	}
	qsort(brr,n,sizeof(frog),compare);
	frog first,second;
	for(i=0;i<p;i++)
	{
		scanf("%d%d",&x,&y);
		first=arr[x-1];
		second=arr[y-1];
		if(abs(first.coordinate-second.coordinate)<=k)
			printf("Yes\n");
		else
		{
			int tmp=maximum(first.coordinate,second.coordinate);
			int j=n-1,gotmax=0,gotmin=0;
			mainflag=1;

			while(j)
			{
				if(tmp==1)
				{
					if(brr[j].coordinate>first.coordinate)
					{
						j--;
						continue;
					}
					else if(brr[j].coordinate==first.coordinate)
					{
						max=first.coordinate;
						gotmax=1;
					}
					if(gotmax==1)
					{
						if(brr[j].coordinate==second.coordinate)
						{
							gotmin=1;
						}
						if(!gotmin&&abs(max-brr[j].coordinate)>k)
							mainflag=0;
						else
						{
							if(max-brr[j].coordinate<=k)
								mainflag=1;
							else 
								mainflag=0;
							max=brr[j].coordinate;
						}
					}
					if(gotmin&gotmax||!mainflag)
						break;
				}
				else
				{       
					if(brr[j].coordinate>second.coordinate)
					{
						j--;
						continue;
					}
					else if(brr[j].coordinate==second.coordinate)
					{
						max=second.coordinate;
						gotmax=1;
					}
					else if(gotmax==1)
					{
						if(brr[j].coordinate==first.coordinate)
						{
							gotmin=1;
						}
						if(!gotmin&&abs(second.coordinate-brr[j].coordinate)>k)
							mainflag=0;
					}
					if(gotmin&gotmax||!mainflag)
						break;


				}
				j--;
			}
			if(mainflag==1)
				printf("Yes\n");
			else
				printf("No\n");
		}
		
	}

	return 0;
}
