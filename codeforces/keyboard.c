#include<stdio.h>
char s1[]={'q','w','e','r','t','y','u','i','o','p'};
char s2[]={'a','s','d','f','g','h','j','k','l',';'};
char s3[]={'z','x','c','v','b','n','m',',','.','/'};

int main()
{
    char R;
    char ch;
    int i,a[255][2]={0};
    for(i=0;i<10;i++)
    {
        if(i==0)
        {
            a[(int)s1[i]][0]=0;
            a[(int)s1[i]][1]=(int)s1[i+1];
        }
        else if(i==9)
        {
            a[(int)s1[i]][0]=(int)s1[i-1];
            a[(int)s1[i]][1]=0;
        }
        else
        {
            a[(int)s1[i]][0]=(int)s1[i-1];
            a[(int)s1[i]][1]=(int)s1[i+1];
        }
    }
    for(i=0;i<10;i++)
    {
        if(i==0)
        {
            a[(int)s2[i]][0]=0;
            a[(int)s2[i]][1]=(int)s2[i+1];
        }
        else if(i==9)
        {
            a[(int)s2[i]][0]=(int)s2[i-1];
            a[(int)s2[i]][1]=0;
        }
        else
        {
            a[(int)s2[i]][0]=(int)s2[i-1];
            a[(int)s2[i]][1]=(int)s2[i+1];
        }
    }

    for(i=0;i<10;i++)
    {
        if(i==0)
        {
            a[(int)s3[i]][0]=0;
            a[(int)s3[i]][1]=(int)s3[i+1];
        }
        else if(i==9)
        {
            a[(int)s3[i]][0]=(int)s3[i-1];
            a[(int)s3[i]][1]=0;
        }
        else
        {
            a[(int)s3[i]][0]=(int)s3[i-1];
            a[(int)s3[i]][1]=(int)s3[i+1];
        }
    }
 /*   for(i=0;i<255;i++)
    {
        if(a[i][0]!=0||a[i][1]!=0)
            printf("%c. %c %c\n",(char)i,(char)a[i][0],(char)a[i][1]);
    }
   */ 
    char c;
//    c=getchar();
    ch=getchar();
    int z=0;
    char str[150];
    c=getchar();
    //printf("%c",ch);
    if(ch=='R')
    {
        z=0;
        c=getchar();
        while(c!='\n')
        {
            str[z++]=(char)a[(int)c][0];
            c=getchar();
        }
        str[z]='\0';
        printf("%s",str);
    }
    else if (ch=='L')
    {
        z=0;
        c=getchar();
        while(c!='\n')
        {
            str[z++]=(char)a[(int)c][1];
            c=getchar();
        }
        str[z]='\0';
        printf("%s",str);
    }
    return 0;
}
