#include<stdio.h>
#include<stdlib.h>
#define g getchar_unlocked
#define  M 1000000009
int readnum()
{
    int n=0;
    char c=g();
    while(c<'0'||c>'9')c=g();
    while(c>='0'&&c<='9')n=10*n+c-'0',c=g();
    return n;
}

struct plank
{
    char c;
    int index;
};
typedef struct plank plank;
int compare(const void *a, const void *b)
{
    plank *p=(plank *)a;
    plank *q=(plank *)b;
    return p->index-q->index;

}
int main()
{
    int x,i,t,n,m;
    long long int pro;
    char ch;
    plank p[100000];
    t=readnum();
    while(t--)
    {
        n=readnum();
        m=readnum();
        for(i=0;i<m;i++)
        {
            ch=getchar();
            x=readnum();
            p[i].c=ch;
            p[i].index=x;
        }
        qsort(p,m,sizeof(plank),compare);
        pro=1;
        for(i=0;i<m-1;i++)
        {    //printf("%c %d\n",p[i].c, p[i].index);
            if(p[i+1].c!=p[i].c)
                pro = (pro * (p[i+1].index-p[i].index))%M;
        }
        printf("%lld\n",pro);
    }
    return 0;
}
