#include<stdio.h>
#include<string.h>
#define g getchar_unlocked
int readnum()
{
    int n=0;
    char c=g();
    while(c<'0'||c>'9')c=g();
    while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
    return n;
}
int main()
{
    int t,n,i,count;
    int a[100005];
    t=readnum();
    while(t--)
    {
        n=readnum();
        count=0;
        memset(a,0,100003);
        while(n--)
        {
            i=readnum();
            if(!a[i])
            {
                a[i]=1;
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
