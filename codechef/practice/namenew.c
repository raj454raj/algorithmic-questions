#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void check(char m[],char w[])
{
	int i=0,j=0,count=0,flag=0;
	int l=strlen(m);
	while(m[i]!='\0'&&w[j]!='\0')
	{
		if(m[i]==w[j])
		{
			i++;j++;	
			count++;
			if(count==l)
				flag=1;
		}
		else
			j++;
	}
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
}
int main()
{
	char mw[50002],m[25001],w[25001];
int t,i=0,a,j,b;
scanf("%d",&t);
getchar();
while(t--)
{
	i=0,a=0;b=0;j=0;
	gets(mw);
		while(mw[j]!=' ')
		{
			m[a++]=mw[j];
			j++;
		}
		m[a]='\0';
		while(mw[j+1]!='\0')
		{
			w[b++]=mw[j+1];
			j++;
		}
		w[b]='\0';
//		printf("%s***%s\n",m,w);

	if(a>b)
		check(w,m);
	else
		check(m,w);
}
return 0;
}
