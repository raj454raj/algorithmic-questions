#include<stdio.h>
#include<string.h>
int l1,l2;
int check(char M[],char W[])
{
	int i,j;
	if(strcmp(M,W)==0)
		return 1;
	int count=0;
	int lm=strlen(M);
	for(i=0;W[i]!='\0';i++)
	{
		if(W[i]==M[0])
		{
			for(j=i;W[j]!='\0';j++)
			{
				if(W[j]==M[count])
				{
					count++;
					if(count==lm)
					return 1;
				}
			}
		}
	}
return 0;
}
int main()
{
	char m[25002],w[25002];
	int t,res;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s%s",m,w);
		l1=strlen(m);
		l2=strlen(w);
		if(l1<l2)
			res=check(m,w);
		else
			res=check(w,m);
		if(res==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
