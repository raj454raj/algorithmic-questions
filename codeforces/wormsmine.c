#include<stdio.h>
int n,s[100002]={0};
int bsearch(int x)
{
    int beg=0,mid,last=n-1;
    int tmpmid=-2;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(x<s[mid])
        {
            tmpmid=mid;
            last=mid-1;
        }
        else if(x==s[mid])
            return mid+1;
        else if(x>s[mid])
            beg=mid+1;
    }
    if(tmpmid!=-2)
        return tmpmid+1;
    return -1;
}
int main()
{
    int i,a[100002];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i!=0)
            s[i]=s[i-1]+a[i];
        else
            s[i]=a[i];
    }
    int x,q;
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&x);
        printf("%d\n",bsearch(x));
    }

    return 0;
}
