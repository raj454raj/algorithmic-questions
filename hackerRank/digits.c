#include<stdio.h>
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
    int n;
    n=readnum();
    int a[]={0,19,56,71,93,145,219,758,768,7584,7684,9696,10081,21993,40585};
    int i,b[15];
    b[0]=0;
    for(i=1;i<15;i++)
        b[i]=b[i-1]+a[i];
    if(n>40584)
        printf("%d\n",b[14]);
    else if(n>21992)
        printf("%d\n",b[13]);
    else if(n>10080)
        printf("%d\n",b[12]);
    else if(n>9695)
        printf("%d\n",b[11]);
    else if(n>7683)
        printf("%d\n",b[10]);
    else if(n>7583)
        printf("%d\n",b[9]);
    else if(n>767)
        printf("%d\n",b[8]);
    else if(n>757)
        printf("%d\n",b[7]);
    else if(n>218)
        printf("%d\n",b[6]);
    else if(n>144)
        printf("%d\n",b[5]);
    else if(n>92)
        printf("%d\n",b[4]);
    else if(n>70)
        printf("%d\n",b[3]);
    else if(n>55)
        printf("%d\n",b[2]);
    else if(n>18)
        printf("%d\n",b[1]);
    else
        printf("%d\n",b[0]);
    return 0;
}
