#include<stdio.h>
long long int fact[] = {1,1,2,6,24,120,720,5040,40320,362880,3628800};
int main()
{
    long long int res;
    char str[15];
    int i,a[26]={0};
    int len=0;
    scanf("%s",str);
    for(i=0;str[i];i++)
    {
        len++;
        a[str[i]-'a']++;
    }
    long long int f = fact[len];
    for(i=0;i<26;i++)
    {
        if(a[i]>1)
            f/=fact[a[i]];
    }
    printf("%lld\n",f);
    return 0;
}
