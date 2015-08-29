#include<stdio.h>
#include<string.h>
#define g getchar_unlocked
int a[30]={1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912};
int b[30]={0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
int readnum()
{
    char c=g();
    int n=0;
    while(c<'0'||c>'9')c=g();
    while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
    return n;
}
int isblack(int x)
{
    int i;
    for(i=0;;i++)
    {
        if(a[i]>x)
            break;
    }
    if(b[i-1]==0)
        return 1;
    return 0;
}
void toggle()
{
    int i;
    for(i=0;i<30;i++)
        b[i]=1-b[i];
}
int countb(int x, int y)
{
    int count=0;
    int X=x,Y=y;
    while(1)
    {
        if(X>Y)
        {
            if(isblack(X))
                count++;
            X/=2;
        }
        else if(Y>X)
        {
            if(isblack(Y))
                count++;
            Y/=2;
        }
        else
        {
            if(isblack(X))
                count++;
            break;
        }
    }   
    return count;
}
int countr(int x, int y)
{
    int count=0;
    int X=x,Y=y;
    while(1)
    {
        if(X>Y)
        {
            if(!isblack(X))
                count++;
            X/=2;
        }
        else if(Y>X)
        {
            if(!isblack(Y))
                count++;
            Y/=2;
        }
        else
        {
            if(!isblack(X))
                count++;
            break;
        }
    }
    return count;

}
int main()
{
    int x,y,t;
    char str[4];
    t=readnum();
    //scanf("%d",&t);
    //getchar();
    while(t--)
    {
        scanf("%s",str);
        if(!strcmp(str,"Qi"))
        {
            toggle();
        }
        else if(!strcmp(str,"Qb"))
        {
            //scanf("%d%d",&x,&y);
            x=readnum();y=readnum();
            printf("%d\n",countb(x,y));
        }
        else if(!strcmp(str,"Qr"))
        {
            //scanf("%d%d",&x,&y);
            x=readnum();y=readnum();
            printf("%d\n",countr(x,y));
        }

    }
    return 0;
}
