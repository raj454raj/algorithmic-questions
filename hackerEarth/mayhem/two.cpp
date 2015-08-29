#include<bits/stdc++.h>
using namespace std;
long long int findnum(long long int n) {
    long long int N = n;
    long long int sum = 0;
    while(N) {
        sum += N%10;
        N /= 10;
    }
    if(sum > 9)
        return findnum(sum);
    return sum;
}

int main() {
    long long int t, x, y, n, sum;
    scanf("%lld", &t);
    while(t--) {
        scanf("%lld", &n);
        sum = 0;
        while(n--) {
            scanf("%lld%lld", &x, &y);
            sum += x * y;
        }
        printf("%lld\n", findnum(sum));
    }
    return 0;
}
