#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
unsigned long long int factorial(int n) {
    unsigned long long int pro = 1;
    for(int i = 1 ; i <= n ; i++) {
        pro = (pro * i) % M;
    }
    return pro;
}
int numzeroes(int n) {
    if(n == 0)
        return 0;
    if(n >= 5 && n <= 9)
        return 1;
    return n / 5 + numzeroes(n / 5);
    
}
int main() { 
    int n;
    cin >> n;
    cout << numzeroes(100);
    return 0;
}
