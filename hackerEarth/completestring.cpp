#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    char str[105],c;
    scanf("%d",&n);
    c=getchar();
    int tmp;
    while(n--)
    {
        int a[26]={0};
        tmp=26;
        while((c=getchar())!='\n')
        {
            a[c-'a']++;
            if(a[c-'a']==1)
                tmp--;
        }
        if(tmp==0)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    return 0;
}
