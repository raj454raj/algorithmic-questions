#include<stdio.h>
#include<stdlib.h>
struct tree
{
	int a;
	struct tree *left,*right;
}*root;
typedef  struct tree tree;
tree *insert(int a,tree *root)
{
	tree *np = (tree *)malloc(sizeof(tree));
	np->a = a;
	np->right=np->left=NULL;
	if(root==NULL)
	{
		root=np;
		return root;
	}
	else
	{
		tree *tmp=root;
		tree *prev=NULL;
		while(tmp)
		{
			if(tmp->a<a)
			{
				prev=tmp;
				tmp=tmp->right;
			}
			else
			{
				prev=tmp;
				tmp=tmp->left;
			}
		}
		if(prev->a>a)
			prev->left=np;
		else
			prev->right=np;
	}
	return root;
}
void inorder(tree *root)
{
	if(root)
	{
		inorder(root->left);
		printf("%d-->",root->a);
		inorder(root->right);
	}
}

int main()
{
	int n,t,i,x;
	scanf("%d",&t);
	while(t--)
	{
		root=NULL;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			root=insert(x,root);
		}
		inorder(root);
	}
	return 0;
}
