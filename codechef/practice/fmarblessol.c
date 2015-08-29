#include <stdio.h>
#include <stdlib.h>
long long A[1000001];
int main()
{
long long N, Q;
long long G[50000][2];
long long T[50000][2];
long long G_num=0;
long long T_num=0;
long long temp = 0;
char action_s[2];
char action;
long long i;
long long fint;
long long sint;
long long ans;
scanf("%lld",&N);
scanf("%lld",&Q);
for(i=0; i<N; i++)
{
scanf("%lld",&A[i]);
A[i] += temp;
temp = A[i];
}
while(Q--)
{
ans = 0;
scanf("%s",action_s);
action = action_s[0];
scanf("%lld",&fint);
scanf("%lld",&sint);
if(action == 'S')
{
for(i=0; i<G_num; i++)
{
if(G[i][0] >= fint && G[i][0] <=sint)
{
ans += G[i][1];
}
}
for(i=0; i<T_num; i++)
{
if(T[i][0] >= fint && T[i][0] <=sint)
{
ans -= T[i][1];
}
}
if(fint == 0)
printf("%lld\n",ans + A[sint]);
else
printf("%lld\n",ans + A[sint]-A[fint-1]);
}
if(action == 'G')
{
G[G_num][0] = fint;
G[G_num][1] = sint;
G_num++;
}
if(action == 'T')
{
T[T_num][0] = fint;
T[T_num][1] = sint;
T_num++;
}
}
return 0;
} 
