#include<stdio.h>


int ord[1000],table[1000],tabn,m;
int nexts(int ch,int j)
{
	int i;
	for(i=j;i<m;i++)
	{
		if(ch==ord[i])
			return i;
	}
	return -1;
}


int check(int num)
{
	int i;
	for(i=0;i<tabn;i++)
	{
		if(num==table[i])
			return 1;
	}
	return 0;
}



void main()
{
	int n,i,j,k,ans,t;
	int next[1000];

//	cin>>t;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		
		tabn=0;
		scanf("%d %d",&n,&m);
		//cin>>n>>m;
		for(i=0;i<401;i++)
                {
                    table[i]=-1;
                    next[i]=-1;
                }
	//	for(i=0;i<m;i++)
               //     ord[i]=-1;
		for(i=0;i<m;i++)
		{
			//cin>>ord[i];
			scanf("%d",&ord[i]);
			int eg=ord[i];
			if(next[eg]==-1)
				next[eg]=i;

		}
		for(i=0;i<m;i++)
			printf("%d ",next[i]);
		printf("\n");
		for(i=0;i<m;i++)
		{
			if(tabn<=n)
			{
				if(check(ord[i])==0)
				{
				table[tabn++]=ord[i];


				next[ord[i]]=nexts(ord[i],i+1);
				ans++;
				}

                                else
				next[ord[i]]=nexts(ord[i],i+1);
			}

			else
			{

				if(check(ord[i])==0)
				{
					int min=-1;
					int flag=-1;
					for(k=0;k<tabn;k++)
					{
						if(next[table[k]]==-1)
						{
							min=k;
							break;
						}
						if(next[table[k]]>flag)
						{
							flag=next[table[k]];
							min=k;
						}
					}


					if(min=-1)
						min=0;
					next[ord[i]]=nexts(ord[i],i+1);
					table[min]=ord[i];
					ans++;
				}

                                else

				next[ord[i]]=nexts(ord[i],i+1);

					
			}
		}
		printf("%d\n",ans);

		//cout<<ans;
	}
}







