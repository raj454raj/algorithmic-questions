#include<stdio.h>
#include<stdlib.h>
struct node
{
	int a;
	struct node *next;
};
typedef struct node node;
node *head,*tail;
int n,d;
void ins(int a)
{
	node *np=(node *)malloc(sizeof(node));
	np->a=a;
	np->next=NULL;
	if(head==NULL)
	{
		head=tail=np;
		return;
	}
	else 
	{
		if(head->a>a)
		{
			np->next=head;
			head=np;
		}
		else if(tail->a<a)
		{
			tail->next=np;
			tail=np;
		}
		else 
		{
			node *tmp=head;
			node *prev=NULL;
			
			while(tmp->a<a)
			{
				prev=tmp;
				tmp=tmp->next;
			}
			np->next=tmp;
			prev->next=np;
		
		}
	}
}
void display()
{
	node *tmp=head;
	while(tmp)
	{
		printf("%d-->",tmp->a);
		tmp=tmp->next;
	}
}
int count=0;
void count_pairs()
{
	node *p,*q;
	p=head;
	if(head->next==NULL)
		return;
	q=head->next;
	while(p!=NULL &&  q!=NULL)
	{
		if(q->a-p->a<=d)
		{
			count++;
			if(p->next==NULL||q->next==NULL)
				return;
			p=p->next->next;
			q=q->next->next;
		}
		else
		{
			p=p->next;
			q=q->next;
		}
	}
}
int main()
{
	int i,x;
	scanf("%d%d",&n,&d);
	for (i=0;i<n;i++)
	{
		scanf("%d",&x);
		ins(x);
		display();
	}
	count_pairs();
	printf("%d\n",count);
	return 0;
}
