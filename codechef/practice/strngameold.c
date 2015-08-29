#include<stdio.h>
#include<string.h>
int main()
{
	char str[32];
	char w[30][32];
	int t,n,i,j,k,flag,l;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		scanf("%d",&n);
		flag=1;
		for(i=0;i<n;i++)
		{
			scanf("%s",w[i]);
			l=strlen(w[i]);
			for(j=0;str[j];j++)
				if(strncmp(&str[j],w[i],l))
				{
				str[j]="0";
					for(k=j+1;str[k];k++)
					str[k]=str[k+1];
					str[k]='\0';
				flag^=1;
				}
		}
		if(flag==1)
			printf("Tracy\n");
		else
			printf("Teddy\n");
	}	
	return 0;
}
