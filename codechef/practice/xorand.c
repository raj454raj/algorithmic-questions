#include<stdio.h>
#include<stdlib.h>
int func(int n,int k,int ans,char str[],int *a)
{
	int i,j,tmp;
	char c;
	for(i=1;i<=k;i++)
	{
		for(j=0;j<n;j++)
		{
			switch(str[0])
			{
				case 'X':ans=ans^a[j];break;
				case 'O':ans=ans|a[j];break;
				default:ans&=a[j];
			};
		}
	}
return ans;
}
int main()
{
int t,i,n,k,ans;
char str[4];

scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	scanf("%d%d",&k,&ans);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%s",str);
	
	ans=func(n,k,ans,str,a);

printf("%d\n",ans);
}
	return 0;
}
