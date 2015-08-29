#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if(n < 2)
        return 0;
    if(n == 2)
        return 1;
    if(n % 2 == 0)
        return 0;
    int sq = sqrt(n);
    for(int i = 3 ; i <= sqrt(n) ; i += 2) {
        if(i < n && n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}
