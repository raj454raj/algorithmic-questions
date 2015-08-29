#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    long long int sum;
    scanf("%d", &n);
    while(n) {
        sum = 0;
        while(n) {
            sum += n * n;
            n--;
        }
        printf("%lld\n", sum);
        scanf("%d", &n);
    }
    return 0;
}
