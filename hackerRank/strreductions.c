#include<stdio.h>
int main()
{
    char str[100005];
    int a[26]={0};
    char c = getchar();
    while(c != '\n')
    {
        a[c-'a']++;
        if(a[c-'a']==1)
            printf("%c", c);
        c=getchar();
    }
   
    return 0;
}
