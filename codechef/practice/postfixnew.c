#include<stdio.h>
#include<ctype.h>
int top1=-1,top2=-1;
char stack[200],m[400];
int priority(char c)
{
	if(c=='*'||c=='/'||c=='%')
		return 1;
	else if(c=='+'||c=='-')
		return 0;
}
void push(char c,int r)
{
	if(r==1)
	{
		top1++;
		stack[top1]=c;
	}
	else
	{
		top2++;
		m[top2]=c;
	}
}
void pop()
{
	top2++;
	m[top2]=stack[top1];
	top1--;
}
void rev()
{
	while(top1!=-1&&stack[top1]!='(')
		pop();
	top1--;
}
void print()
{
	int T1,T2;
	for(T2=0;T2<=top2;T2++)
		printf("%c",m[T2]);
	printf("\n");
}
int main()
{
	char tmp[400];
	int t;
	scanf("%d",&t);
	int p,i,p_;
	while(t--)
	{
		scanf("%s",tmp);
		for(i=0;tmp[i]!='\0';i++)
		{
			if(tmp[i]=='(')
				push(tmp[i],1);
			else if(tmp[i]==')')
				rev();
			else if(isalpha(tmp[i]))
				push(tmp[i],2);
			else
			{
				push(tmp[i],1);
				p=priority(stack[top1]);
				p_=priority(stack[top1-1]);
				if(p==0&&p_==1)
				{
					top2++;
					m[top2]=stack[top1-1];
					stack[top1-1]=stack[top1];
					top1--;
				}
			}
		}
		print();
		top1=-1;
		top2=-1;
	}
	return 0;
}

