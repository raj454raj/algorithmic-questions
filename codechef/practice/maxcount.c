#include<stdio.h>
#include<stdlib.h>
struct num
{
	int no;
	int count;
};
int compare(int a,int b)
{
	if(a>b)
		return 1;
	return 0;
}
typedef struct num num;
int main()
{
	int t,j,k,z,no,n,i,tmp,flag=0,pos[10000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		flag=0;
		z=0;
		num *s=(num *)malloc(n*sizeof(num));
		
		for(i=0;i<n;i++)
		{
			flag=0;
			s[i].count=1;
			scanf("%d",&tmp);
			for(k=0;k<=i;k++)
			{
				if(tmp==s[k].no)
				{
					s[k].count++;
					flag=1;
				}
			}
			if(flag==0)
			{
				s[i].no=tmp;
				pos[z++]=i;
			}
		}
		int m=0,max=0,number=0;
		k=0;
		while(m<z)
		{
			if(k==pos[m])
			{
				if(s[k].count==max)
				{
					if(compare(s[k].no,number)==0)
						number=s[k].no;
				}
				else if(s[k].count>max)
				{
					max=s[k].count;
					number=s[k].no;
				}
			m++;
			}
			k++;
		}
		printf("%d %d\n",number,max);

	}

	return 0;
}
