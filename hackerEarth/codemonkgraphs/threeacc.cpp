#include <bits/stdc++.h>

using namespace std;
int arr[200000];
long long int counti[200000];
int findparent(int x){
    if(arr[x]==x)
        return x;
    else
        return arr[x]=findparent(arr[x]);
}

void unionf(int i,int j){
    if(i<j)
        arr[findparent(j)]=arr[findparent(i)];
    else if(i>j)
        arr[findparent(i)]=arr[findparent(j)];
}

int main()
{
    int test;
    cin>>test;
    while(test--){
        memset(counti,0,sizeof(counti));
        long long int n,m,a,b,c;
        cin>>n>>m;
        for(int i=0;i<n;i++)
            arr[i]=i;
        while(m--){
            cin>>a>>b;
            unionf(a-1,b-1); 
        }
        for(int i=0;i<n;i++)
            findparent(i);
        for(int i=0;i<n;i++){
            cin>>c;
            counti[arr[i]]+=c;
        }  
        long long int max=0;
        for(int i=0;i<n;i++){

            if(max<counti[i])
                max=counti[i];
        }
        cout<<max<<endl;
    }
    return 0;
}

