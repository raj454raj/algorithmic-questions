#include<stdio.h>
int main()
{
    int t,count;
    char str[100002];
    char c;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int a[26]={0};
        count=0;
        while((c=getchar())!='\n')
        {
            a[c-'a']++;
            if(a[c-'a']==1)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
