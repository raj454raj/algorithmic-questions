#include<stdio.h>
int main()
{
    int n,i,tmp;
    char c,str[150];
    scanf("%d",&n);
    c=getchar();
    while(n--)
    {
        int a[26]={0};
        tmp=26;
        scanf("%s",str);
        for(i=0;str[i];i++)
        {
            a[str[i]-'a']++;
            if(a[str[i]-'a']==1)
                tmp--;
        }
        if(tmp==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
