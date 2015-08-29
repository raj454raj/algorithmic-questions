#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,n,k;
    char str[5],tmpstr[5];
    scanf("%d",&t);
    while(t--)
    {
        double a[26][26]={0};
        scanf("%d%d",&n,&k);
        getchar();
        scanf("%s",str);
        for(i=0;i<26;i++)
            for(j=0;j<26;j++)
                scanf("%lf",&a[i][j]);
        double pro,sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%s",tmpstr);
            if(strlen(tmpstr)!=strlen(str))
                continue;
            pro=1;
            for(j=0;tmpstr[j];j++)
            {
                pro*=a[str[j]-'a'][tmpstr[j]-'a'];
            }
            sum+=pro;
        }
        if(sum>1.0)
            printf("1.000000\n");
        else
            printf("%.9lf\n",sum);
    }
    return 0;
}
