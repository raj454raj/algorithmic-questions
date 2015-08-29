#include<bits/stdc++.h>

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(a) a.begin(),a.end()

using namespace std;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector< PII > VPII;
typedef long long int LL;
typedef pair<LL,LL> PLL;
typedef vector<LL> VLL;
typedef vector< PLL > VPLL;
int id,x,k,n,m,i,var,v1[1000010],v2[1000010],cum[1000010]={0};
char c1[2],c2[2];
VI v,vec1;
stack <int> s;
map <int,LL> mp,mp1,mp2; 
map <int,LL>::iterator it; 
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main()
{
    scanint(n);
    scanint(m);
    v.resize(n);
    for(i=0;i<n;i++)
    {
        scanint(var);
        v[i]=var;
        v1[i]=n-1;
        v2[i]=0;
    }
    for(i=0;i<n;i++)
    {
        while(s.empty()!=1&&v[s.top()]<v[i])
        {
            v1[s.top()]=i-1;
            s.pop();
        }
        s.push(i);
    }
    stack <int> s1;
    swap(s,s1);
    for(i=n-1;i>=0;i--)
    {
        while(s.empty()!=1&&v[s.top()]<=v[i])
        {
            v2[s.top()]=i+1;
            s.pop();
        }
        s.push(i);
    }
    for(i=0;i<n;i++)
        mp[v[i]]+=((v1[i]-i+1)*(i-v2[i]+1));
    x=0;
    int r=mp.size();
    it=mp.begin(),i=0;
    vec1.resize(r);
    while(it!=mp.end())
    {
        x=x+it->S;
        vec1[i]=it->F;
        cum[i]=x;
        it++;
        i++;
    }
    for(int ir = 0 ; ir < vec1.size() ; ++ir) {
        cout << vec1[ir] << " ";
    }
    cout << endl;
    for(i=0;i<m;i++)
    {
        scanf("%s",c1);
        scanint(k);
        scanf("%s",c2);
        x=0;
        if(c1[0]=='=')
            x=mp[k];
        else if(c1[0]=='>')
        {
            id=upper_bound(all(vec1),k)-vec1.begin();
            if(id==0)
                x=cum[r-1];
            else
                x=cum[r-1]-cum[id-1];
        }
        else if(c1[0]=='<')
        {
            id=lower_bound(all(vec1),k)-vec1.begin();
            if(id!=0)
                x=cum[id-1];
        }
        if(x&1)
            putchar_unlocked(c2[0]);
        else
        {
            if(c2[0]=='C')
                putchar_unlocked('D');
            else
                putchar_unlocked('C');
        }
    }
    putchar_unlocked('\n');
    return 0;
}

