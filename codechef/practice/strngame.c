#include<stdio.h>
#include<string.h>
int main()
{
	int n,t,i,j,k,z,flag;
	scanf("%d",&t);
	int a[32]={1};
	int len,tmp;
	char s[32],dict[30][32];
	while(t--)
	{
		tmp=0;
		memset(a,1,32*sizeof(int));
		scanf("%s",s);
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%s",dict[i]);
		for(i=0;i<n;i++)
		{
			len=strlen(dict[i]);
			for(j=0;s[j];j++)
			{
				if(s[j]==dict[i][0])
				{
					flag=0;
					for(k=j,z=0;dict[z];z++,k++)
					{
						if(a[k]==0)
						{
							flag=1;
							break;
						}
					}
					if(flag==0)
					{
						if(strncmp(&s[k],dict[i],len))
						{
							tmp=!tmp;
							memset(&a[k],0,len);
						}
					}
				break;
				}
			}
		}
		printf("%d\n",tmp);
	}

	return 0;
}
