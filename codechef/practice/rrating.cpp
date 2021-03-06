#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
 
using namespace std;
#define getcx getchar_unlocked
inline void inp( int &n )
{
    n=0;
    int ch=getcx();int sign=1;
    while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}
    while( ch >= '0' && ch <= '9' )
        n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
    n=n*sign;
}
 
 
int main()
{
    //ios_base::sync_with_stdio(false);
    int n;
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,std::greater<int> > minheap;

    int num=0,x,y;
    int minsize=0,t;

    inp(n);
    while(n--)
    {
        inp(x);
        if(x==1)
        {
            inp(y);
            if(minsize<(num+1)/3)
            {
                t=maxheap.top();
                if(y>t)
                {
                    minheap.push(y);
                }
                else
                {
                    maxheap.pop();
                    maxheap.push(y);
                    minheap.push(t);
                }
                minsize++;
            }
            else if(minsize && minheap.top()<y)
            {
                t=minheap.top();
                minheap.pop();
                minheap.push(y);
                maxheap.push(t);
            }
            else
            {
                maxheap.push(y);
            }
            num++;
        }
        else
        {
            if(minsize)
                printf("%d\n",minheap.top());
            else
                printf("No reviews yet\n");
        }
    }
    return 0;
}
