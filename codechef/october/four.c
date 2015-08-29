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
int maximum(int a,int b,int c)
{
    int max=0,index;
    if(max<a)
    {
        max=a;
        index=0;
    }
    if(max<b)
    {
        max=b;
        index=1;
    }
    if(max<c)
    {
        max=c;
        index=2;
    }
    return index;
}
int main()
{
    int arr[3][101];
    int x,t,R,G,B,M,i,tmpmax,max,index;
    t=readnum();
    while(t--)
    {
        int a[3]={0};
        R=readnum();G=readnum();B=readnum();M=readnum();
        max=0;
        for(i=0;i<R;i++)
        {
            x=readnum();
            arr[0][i]=x;
            if(x>max)
                max=x;
        }
        a[0]=max;max=0;
        for(i=0;i<G;i++)
        {
            x=readnum();
            arr[1][i]=x;
            if(x>max)
                max=x;
        }
        a[1]=max;max=0;
        for(i=0;i<B;i++)
        {
            x=readnum();
            arr[2][i]=x;
            if(x>max)
                max=x;
        }
        a[2]=max;max=0;
        index=maximum(a[0],a[1],a[2]);
        max=a[index];
        tmpmax=0;
        while(M--)
        {
            if(index==0)
            {
                tmpmax=0;
                for(i=0;i<R;i++)
                {
                    arr[0][i]/=2;
                    if(arr[0][i]>tmpmax)
                        tmpmax=arr[0][i];
                }
                a[index]=tmpmax;
                index=maximum(tmpmax,a[1],a[2]);
                max=a[index];
            }
            else if(index==1)
            {
                tmpmax=0;
                for(i=0;i<G;i++)
                {
                    arr[1][i]/=2;
                    if(arr[1][i]>tmpmax)
                        tmpmax=arr[1][i];
                }
                a[index]=tmpmax;
                index=maximum(a[0],tmpmax,a[2]);
                max=a[index];
            }
            else if(index==2)
            {
                tmpmax=0;
                for(i=0;i<B;i++)
                {
                    arr[2][i]/=2;
                    if(arr[2][i]>tmpmax)
                        tmpmax=arr[2][i];
                }
                a[index]=tmpmax;
                index=maximum(a[0],a[1],tmpmax);
                max=a[index];
            }
/*            for(i=0;i<R;i++)
                printf("%d ",arr[0][i]);
            printf("\n");
            for(i=0;i<G;i++)
                printf("%d ",arr[1][i]);
            printf("\n");
            for(i=0;i<B;i++)
                printf("%d ",arr[2][i]);
            printf("\n");
            printf("MAX:%d INDEX:%d\n",max,index);
  */      }
        printf("%d\n",max);
    }
    return 0;
}
