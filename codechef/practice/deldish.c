#include<stdio.h>
 
#define ll long long
 
ll delicious[10000000];
int used[10000000];
long size;
 
long solve(ll num)
{
long a=0,b=size;
while(a<b)
{
long c=(a+b)/2;
if(delicious[c]<=num)
a=c+1;
else
b=c;
}
return a;
}
 
int main()
{
long i;
size=0;
for(i=0;i<9;i++)
{
delicious[i]=i+1;
used[i]=1<<(i+1);
size++;
}
 
for(i=0;i<size;i++)
{
ll d=delicious[i];
int u=used[i];
 
int _u=~u;
 
int k;
 
for(k=0;k<10;k++)
{
if(_u&1)
{
ll new_d=d*10+k;
int new_u=u|(1<<k);
delicious[size]=new_d;
used[size]=new_u;
size++;
}
_u=_u>>1;
}
}
 
long t;
scanf("%ld",&t);
 
while(t--)
{
ll l,r;
scanf("%lld %lld",&l,&r);
if(l>=10000000000)
{
printf("0\n");
continue;
}
else if(r>=10000000000)
r=9999999999;
 
printf("%ld\n",solve(r)-solve(l-1));
}
//printf("%ld",size);
// getch();
return 0;
} 
