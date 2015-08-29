#include<stdio.h>
int main()
{
	int t,i,flag1,flag2;
	scanf("%d",&t);
	char c;
	getchar();
	while(t--)
	{
		flag1=0;flag2=0;
		int a[26]={0},b[26]={0},p[26]={0},q[26]={0};
		while((c=getchar())!=' ')
		{
			a[c-'a']++;
			p[c-'a']=1;
		}
		while((c=getchar())!='\n')
		{
			b[c-'a']++;
			q[c-'a']=1;
		}
		for(i=0;i<26;i++)
		{
			if(a[i]!=b[i])
			{
				flag1=1;
				break;
			}
		}
		for(i=0;i<26;i++)
		{
			if(p[i]!=q[i])
			{
				flag2=1;
				break;
			}
		}

		if(flag1==flag2)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
