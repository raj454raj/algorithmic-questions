#include<stdio.h>
#include<string.h>
int ispalindrome(char str[], int a, int b)
{
    int i,j;
    i=a;j=b;
    while(i<=j)
    {
        if(str[i]==str[j])
        {
            i++;j--;
        }
        else
            return 0;
    }
    return 1;
}
int main()
{
    int t,i,j,len,count,flag;
    char str[100002];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        flag=0;
        count=0;
        scanf("%s",str);
        len=strlen(str);
        i=0;j=len-1;
        if(ispalindrome(str,i,j))
            printf("YES\n");
        else
        {
            while(1)
            {
                if(i==j||i+1==j)
                    break;
                if(str[i]==str[j])
                {
                    i++;j--;
                }
                else
                {
                    if(ispalindrome(str,i,j-1)||ispalindrome(str,i+1,j))
                    {
                        flag=0;
                        break;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }

    return 0;
}
