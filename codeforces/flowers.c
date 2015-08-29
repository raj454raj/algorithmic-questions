#include<stdio.h>
#define mod 1000000007
long long int ca[10002][100]={0};

long long int c(long long int n, long long int k)
{
    if(k>n/2)
        k=n-k;
    if(ca[n][k]!=0)
        return ca[n][k];
    if(k==0)
    {
        ca[n][k]=1;
        return 1;
    }
    if(k==1)
    {
        ca[n][k]=n;
        return n;
    }
    else
    {
        ca[n][k]=(c(n-1,k)%mod+c(n-1,k-1)%mod)%mod;
        return ca[n][k];
    }
}
int main()
{
    long long int j,i,t,k,a,b;
    long long int ar[100002]={0},s[100002]={0};
    scanf("%lld%lld",&t,&k);
    for(i=1;i<=1000;i++)
    {
        if(k>i)
            ar[i]=1;
        else
        {
            ar[i]=1;
            for(j=1;j<=i;j++)
            {
                if(i-j*k+k>j)
                    ar[i]=(ar[i]+c(i-j*k+j,j))%mod;
                else 
                    break;
            }
        }
        s[i]=(s[i-1]+ar[i])%mod;

    }
    printf("yo");
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",s[b]-s[a-1]);
        //printf("%lld\n",s[b+1]-s[a+1]);
    }
    //scanf("%d%d",&a,&b);

    return 0;
}
