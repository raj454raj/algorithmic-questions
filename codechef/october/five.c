#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
struct point
{
    int x,y;
};
typedef struct point point;
point p[2002];
int a,b,n;
int compare(const void *a, const void *b)
{
    point *r=(point *)a;
    point *s=(point *)b;
    if(r->x==s->x)
        return r->y - s->y;
    return r->x - s->x;
}
int b_search(int x)
{
    int beg=0,last=n-1,mid;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(p[mid].x==x)
            return mid;
        else if(p[mid].x<x)
            beg=mid+1;
        else
            last=mid-1;
    }
    return -1;
}
int check()
{
    int p1x,p2x,p1y,p2y;
    int i,tmpx1,tmpx2,tmpy1,tmpy2;
    tmpx1=(p[a].x+p[b].x);tmpx2=fabs(p[b].x-p[a].x);tmpy1=(p[a].y+p[b].y);tmpy2=fabs(p[b].y-p[a].y);
    int count=2;
    if((tmpx1+tmpy2)&1)
        return -1;
    p1x=(tmpx1+tmpy2)/2;
    if((tmpx1-tmpy2)&1)
        return -1;
    p2x=(tmpx1-tmpy2)/2;
    if(p[b].y>p[a].y)
    {
        if((tmpy1-tmpx2)&1)
            return -1;
        p1y=(tmpy1 - tmpx2)/2;
        if((tmpy1+tmpx2)&1)
            return -1;
        p2y=(tmpy1 + tmpx2)/2;

    }
    else
    {
        if((tmpy1-tmpx2)&1)
            return -1;
        p2y=(tmpy1 - tmpx2)/2;
        if((tmpy1+tmpx2)&1)
            return -1;
        p1y=(tmpy1 + tmpx2)/2;
    }
    int flag=0;

    int tmp1=b_search(p1x);

    for(i=tmp1;i>=0;i--)
    {
        if(p[i].x!=p1x)
            break;
        if(p[i].y==p1y)
        {
            count++;
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        for(i=tmp1;i<n;i++)
        {
            if(p[i].x!=p1x)
                break;
            if(p[i].y==p1y)
            {
                count++;
                break;
            }
        }
    }
    flag=0;
    int tmp2=b_search(p2x);
    for(i=tmp2;i>=0;i--)
    {
        if(p[i].x!=p2x)
            break;
        if(p[i].y==p2y)
        {
            count++;
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        for(i=tmp2;i<n;i++)
        {
            if(p[i].x!=p2x)
                break;
            if(p[i].y==p2y)
            {
                count++;
                break;
            }
        }
    }
    return 4-count;

}
int main()
{
    int j,i;
    int c=0;
    int min=INT_MAX,ret;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d%d",&p[i].x,&p[i].y);
    if(n==0)
        printf("4\n");
    else if(n==1)
        printf("3\n");
    else if(n==2)
        printf("2\n");
    if(n<=2)
        return 0;
    qsort(p,n,sizeof(point),compare);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            a=i;b=j;
            ret=check();
            if(ret!=-1 && ret<min)
                min=ret;
            if(min==0)
            {
                printf("0\n");
                return 0;
            }
        }
    }
    printf("%d\n",min);
    return 0;
}
