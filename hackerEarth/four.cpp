#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
unsigned long long int fact(unsigned long long int n) {
    unsigned long long int ans1 = 1;
    for(int i = 1 ; i <= n ; i++) {
        if(ans1 > MOD)
            ans1 = ans1 % MOD;
        ans1 = ans1 * i;
    }    
    return ans1 % MOD;
}
int main() {
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        cout << fact(n-1) % MOD << endl;
    }
    return 0;
}

