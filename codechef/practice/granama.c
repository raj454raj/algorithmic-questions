#include<stdio.h>
int main()
{
	char c,r[1000],s[1000];
	int t,i,count1,count2,flag,flag2;

	scanf("%d",&t);
	getchar();
	while(t--)
	{
		int a[26]={0},b[26]={0};
		count1=0;
		count2=0;
		flag=0;
		flag2=0;
		while((c=getchar())!=' ')
		{
			a[c-'a']++;
			count1++;
		}
		while((c=getchar())!='\n')
		{
			b[c-'a']++;
			count2++;
		}

		for(i=0;i<26;i++)
		{
			if((a[i]==0 && b[i])||(a[i] && b[i]==0))
			{
				flag=2;
				break;
			}
			if(a[i]!=b[i])
			{
				flag2=3;
			}
		}
		if((count1!=count2 && flag==2 )||(flag==3))
		{
			printf("YES\n");
			continue;
		}
		for(i=0;i<26;i++)
		{
			if(a[i]!=b[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("NO\n");
		else
			printf("YES\n");

	}
	return 0;
}
