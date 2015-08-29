#include<stdio.h>
#include<math.h>
#define 0.000001
struct point
{
    int x,y,a,b;
};
typedef struct point point;
point p[4];
int equate(double x, double y)
{
    if(fabs(x-y)<eps)
        return 1;
    return 0;
}
int issquare()
{
    int i;
    double d[6];
    d[0]=sqrt((p[0].x-p[1].x)*(p[0].x-p[1].x)+(p[0].y-p[1].y)*(p[0].y-p[1].y));
    d[1]=sqrt((p[1].x-p[2].x)*(p[1].x-p[2].x)+(p[1].y-p[2].y)*(p[1].y-p[2].y));
    d[2]=sqrt((p[2].x-p[3].x)*(p[2].x-p[3].x)+(p[2].y-p[3].y)*(p[2].y-p[3].y));
    d[3]=sqrt((p[0].x-p[3].x)*(p[0].x-p[3].x)+(p[0].y-p[3].y)*(p[0].y-p[3].y));
    d[4]=sqrt((p[0].x-p[2].x)*(p[0].x-p[2].x)+(p[0].y-p[2].y)*(p[0].y-p[2].y));
    d[5]=sqrt((p[1].x-p[3].x)*(p[1].x-p[3].x)+(p[1].y-p[3].y)*(p[1].y-p[3].y));
    int z=0,j,flag;
    double a[6]={0};
    for(i=0;i<6;i++)
    {
        flag=0;
        for(j=0;j<z;j++)
        {
            if(equate(a[j],d[i]))
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            a[z++]=d[i];
            if(z>2)
                return 0;
        }
    }
    return 1;
}

point p[4];
int main()
{
    int i,n;
    
    scanf("%d",&n);
    while(n--)
    {
        for(i=0;i<4;i++)
            scanf("%d%d%d%d",&p[i].x,&p[i].y,&p[i].a,&p[i].b);
        issquare();
    }
    return 0;
}
