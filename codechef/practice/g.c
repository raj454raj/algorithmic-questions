#include<stdio.h>
int main()
{
    long long int count=0,r,j,num,i,max=1000000000000000;
    int flag=0;
    for(i=12000000000;i<=000000000;i+=35)
    {
     
    int a[10]={0};
        num=i;
        if(num/pow(10,10)!=5||num/pow(10,10)!=7)
        	continue;
    while(num)
    {
        r=num%10;
        a[num%10]++;
        num/=10;
    }
    flag=0;
    for(j=0;j<10;j++)
    {
        if(j!=5&&j!=7&&a[j]!=0)
        {
                        flag=1;
                        break;
        }
    }
    if(flag==1)
        continue;
    else
        count++;
    }
        printf("%lld ",count);
   
        return 0;
}
