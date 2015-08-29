#include<bits/stdc++.h>
using namespace std;
long long int P[202][202];
long long int p (int n, int k)
{
    if(P[n][k] != -1)
        return P[n][k];
    if(k > n) {
        P[n][k] = 0;
        return 0;
    }
    if(k == n) {
        P[n][k] = 1;
        return 1;
    }
    else {
        P[n][k] = p(n, k+1) + p(n-k, k);
        return P[n][k]; 
    }
}
int main() {
    int t,n,k;
    cin >> t;
    long long int tmp;
    for(int i = 0 ; i < 202 ; i++) {
        for(int j = 0 ; j < 202 ; j++) {
            P[i][j] = -1;
        }
    }
    while(t--) {
        tmp = 0;
        cin >> n >> k;
        cout <<p(n, k)<<endl;
    }
    return 0;
}
