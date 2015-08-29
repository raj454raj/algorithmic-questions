#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,z,i,x;
    char c,a[105];
    scanf("%d%*c",&t);
    //c=getchar();
    while(t--)
    {
        z=0;
        c=getchar();
        while(c!='\n'&&c!=' '&&c!=EOF)
        {
            a[z++]=c;
            c=getchar();
        }
        //scanf("%s",a);
        //x=strlen(a);
        x=next_permutation(a,a + z);
        if(x)
        {
            for(i=0;i<z;i++)
                printf("%c",a[i]);
            printf("\n");
        }
        else
            printf("no answer\n");
    }
    return 0;
}
