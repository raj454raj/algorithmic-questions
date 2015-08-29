#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define mod 1000000007
struct tree
{
	int v,p;
};
typedef struct tree tree;
int max(int a,int b)
{
	return (a>b)?a:b;
}
int main()
{
	int h,i,n,x;
	scanf("%d",&h);
	tree ar[32769];
	while(h)
	{
		n=pow(2,h)-1;
		for(i=1;i<=n;i++)
		{
			//root=insert(root,x);
			scanf("%d",&ar[i].v);
			ar[i].p=0;
		}
		for(i=n;i>=1;i--)
		{
			if(2*i>n)
				ar[i].p=ar[i].v;
			else
				ar[i].p=max((ar[i].v*ar[2*i].p)%mod,(ar[i].v*ar[2*i+1].p)%mod);
		}

		//inorder(root);
		printf("%d\n",ar[1].p);
		scanf("%d",&h);
	}
	return 0;
}
