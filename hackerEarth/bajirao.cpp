#include<iostream>
#include<stdio.h>
using namespace std;
int a[1000]={0};
int fact(int n)
{
    if(n==0||n==1)
    {
        a[n]=1;
        return 1;
    }
    else
    {   
        if(n<1000)
        {
            if(a[n])
            {
                return a[n];
            }
            else
            {
                a[n]=(n*(fact(n-1)%107))%107;
                return a[n];
            }
        }

        return (n*(fact(n-1))%107)%107;
    }

}
int main()
{
    int i,n,t,k,tmpn,tmp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        if(k==1)
            tmp=fact(n)%107;
        else if(k==2)
        {
            if(n==3)
                tmp=78;
            else if(n==4)
                tmp=fact(24)%107;
            else
                tmp=0;
        }
        else
        {
            tmp=0;
        }
        if(n==1||n==2)
            tmp=n;
        printf("%d\n",tmp);
    }
    return 0;
}
