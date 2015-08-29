#include<stdio.h>
#define g getchar_unlocked
long long int readnum()
{
    long long int n=0;
    char c=g();
    while(c<'0'||c>'9')c=g();
    while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
    return n;
}

int main()
{
    long long int n,tmpn,t,flag1,tmp,flag2,flag3,last1,last2,last3,s3,s5,s15;
    t=readnum();
    long long int a[1000000]={0};
    while(t--)
    {
        n=readnum();
        flag1=0;flag2=0;flag3=0;
        tmp=n-1;
        
      /*  if(n<1000000&&a[n]!=0)
        {
            printf("%lld\n",a[n]);
            continue;
        }
        */s3=0;s5=0;s15=0;
        while(1)
        {
            if(flag3)
                break;
            if((tmp%3==0&&tmp%5==0))
            {
                if(flag1==0)
                {
                    last1=tmp;
                    flag1=1;
                }
                if(flag2==0)
                {
                    flag2=1;
                    last2=tmp;
                }
                last3=tmp;
                flag3=1;
            }
            else if(tmp%3==0 && !flag1)
            {
                flag1=1;
                last1=tmp;
            }
            else if(tmp%5==0 && !flag2)
            {
                flag2=1;
                last2=tmp;
            }
           
            tmp--;
        }
        
        if(last1>=3)
        {
            tmpn=(last1-3)/3+1;
            s3 = (tmpn*(2*3+(tmpn-1)*3))/2;
        }
        if(last2>=5)
        {
            tmpn=(last2-5)/5+1;
            s5 = (tmpn*(2*5+(tmpn-1)*5))/2;
        }
        if(last3>=15)
        {
            tmpn=(last3-15)/15+1;
            s15 = (tmpn*(2*15+(tmpn-1)*15))/2;
        }
        //if(n<1000000)
          //  a[n]=s3+s5-s15;
        printf("%lld\n",s3+s5-s15);
    }
    return 0;
}
