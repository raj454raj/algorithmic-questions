#include<stdio.h>
int main()
{
    int i,t,max;
    char c='a';
    char s[1005];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        max=0;
        c='0';
        int ar[26]={0};
        scanf("%s",s);
        for(i=0;s[i];i++)
        {
            ar[s[i]-'a']++;
            if(ar[s[i]-'a']>max)
            {
                max=ar[s[i]-'a'];
                c=s[i];
            }
            else if(ar[s[i]-'a']==max)
            {
                if(c>s[i])
                    c=s[i];
            }
        }
        for(i=0;s[i];i++)
        {
            if(s[i]==c)
                printf("?");
            else
                printf("%c",s[i]);
        }
        printf("\n");

    }
    return 0;
}
