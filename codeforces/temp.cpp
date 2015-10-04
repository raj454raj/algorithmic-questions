#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int m, long long int n){if(n == 0) return m;return gcd(n, m % n);}
long long int fastpow(long long int a, long long int b,long long int m){long long int r = 1;while (b > 0){if (b % 2 == 1)r = (r * a) % m;b = b >> 1;a = (a * a) % m;}return r;}
int prime(long long int x){if(x==1)return 0;if(x<=3)return 1;if(x%6==1||x%6==5){long long int y=sqrt(x),i;for(i=2;i<=y;i++)if(x%i==0)return 0;return 1;} return 0;}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long int i,n,var,flag=0,area=0;
    vector <long long int> vec;
    cin >>n;
    for(i=0;i<n;i++)
    {
        cin >>var;
        vec.push_back(var);
    }
    sort(vec.begin(),vec.end());
    for(i=n-1;i>=0;i--)
    {
        if(i!=0)
        {
            if(flag==1){flag=0;
                continue;}
            if(vec[i]==vec[i-1]){
                flag=1;
                continue;
            }
            if((vec[i]-vec[i-1])==1){
                vec[i]-=1;
                flag=1;
                continue;
            }
            vec.erase(vec.begin()+i);
        }
        else{
            if(flag==1)
                continue;
            else
                vec.erase(vec.begin()+i);}
    }
    n=vec.size();
    for(i=n-1;i>=0;i=i-4)
    {
        if((i-2)<0)
            break;
        area+=(vec[i]*vec[i-2]);
    }
    cout <<area;
    return 0;
}

