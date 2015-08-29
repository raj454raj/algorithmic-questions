#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

struct apple
{
int type;
int orgpos;
int pos;
};

struct min
{
int t1;
int t2;
};
int size;

int compare(const void *a,const void *b)
{
struct apple* p1=(struct apple*)a;
struct apple* p2=(struct apple*)b;
int mid=size/2;

	if( p1->type > p2->type )
		return 1;
	else if(p1->type == p2->type)
	{
		if(p1->pos>p2->pos)
			return 1;
	}
return 0;				
}
		
int main()
{
int sum,size;
int min = INT_MIN;
int beg,end,mid,flag;
int poschk,i,j,start,stop;
struct apple *a=(struct apple *)malloc(sizeof(struct apple)*1000000);
struct min result;
int s,no,k;
int g,h,max,max2;

		scanf("%d %d",&size,&sum);
		mid=size/2;
		for(k=0;k<size;k++)
		{
			scanf("%d",&no);
			a[k].type=no;
			a[k].pos=a[k].orgpos=k;
			if(mid&1)
			{
				if(a[k].orgpos>mid)
					a[k].pos=(size-1)-a[k].orgpos;
			}
			else
			{
				if(a[k].orgpos>=mid)
					a[k].pos=(size-1)-a[k].orgpos;
			}
			if(a[k].type>min && a[k].type<sum)
				min = a[k].type;	
		}
	
		result.t1=10000000;
		result.t2=10000000;

		qsort(a,size,sizeof(struct apple),compare);
		
		//Binary Search !!!!

		beg=0;
		end=size-1;
		
		while(beg<=end)
		{
			mid=(beg+end)/2;
			
			if(a[mid].type==min)
			{
				poschk=mid;
				break;
			}
			else if(a[mid].type<min)
				beg=mid+1;	
			else
				end=mid-1;
		}
	
		//start finding the answer 

		start = 0;
		end = poschk;
		flag=0;
		while(start<end)
		{
			s=a[start].type+a[end].type;
			if(s==sum)	
			{
				if(a[start].type==a[end].type)
				{
					end--;
					continue;
				}
				flag=1;
				g=a[start].pos+1;
				h=a[end].pos+1;
				if((g+h)<(result.t1+result.t2))
				{
                                                        result.t1=g;
                                                        result.t2=h;
                                }
				else if((g+h)==(result.t1+result.t2))
				{
					max=g>h?g:h;
					max2=result.t1>result.t2?result.t1:result.t2;
					if(max<max2)
					{	
						result.t1=g;
						result.t2=h;
					}	
				}
				end--;				
			}
			else if(s<sum)
				start++;
			else
				end--;
		}
		if(!flag)
		{
			printf("-1\n");
			goto end;
		}
		if(result.t1>result.t2)
			printf("%d\n",result.t1);
		else	
			printf("%d\n",result.t2);
end:
return 0;
}
