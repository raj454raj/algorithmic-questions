#include<stdio.h>
#include<math.h>
int isprime(int n)
{
    if(n%2==0&&n!=2)
        return 0;
    else
    {
        int i;
        int sq=sqrt(n);
        for(i=3;i<=sq;i+=2)
        {
            if(n%i==0 && n!=i)
                return 0;
        }
    }
    return 1;
}
int main()
{
    int n,x,y;
    scanf("%d",&n);
    if(n&1)
    {
        x=n/2;
        y=n-x;
        while(1)
        {
            if(!isprime(x)&&!isprime(y))
                break;
            else
            {
                x--;
                y=n-x;
            }
        }
        printf("%d %d\n",x,y);
    }
    else
    {
        x=n/2;
        y=n/2;
        while(1)
        {
            if(!isprime(x)&&!isprime(y))
                break;
            else
            {
                x--;
                y=n-x;
            }
        }
        printf("%d %d\n",x,y);
    
    }
    return 0;
}
