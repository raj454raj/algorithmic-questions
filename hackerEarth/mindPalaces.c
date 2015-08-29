#include<stdio.h>
int n,m;
int main()
{
	int i,j;
	int a[1000001]={0};
	scanf("%d%d",&n,&m);
	int p=n*m;
	for(i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
	}
	int q,num,flag,k,tmpflag;
	int tmp,beg,last,mid;
	scanf("%d",&q);
	for(j=0;j<q;j++)
	{
		flag=0;
		scanf("%d",&num);
		for(i=0;i<p;i+=m)
		{
			beg=0;last=m-1;
			tmp=0;tmpflag=0;
			while(beg<=last)
			{
				mid=(beg+last)/2;
				if(a[i+mid]==num)
				{
					tmp=i+mid;
					tmpflag=1;
					break;
				}
				else if(a[i+mid]<num)
					beg=mid+1;
				else
					last=mid-1;
				
			}
			if(tmpflag)
			{
				printf("%d %d\n",i/n,tmp%m);
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("-1 -1\n");
	}
	return 0;
}
