#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if(a == b)
        return a;
    else if(a > b)
        return gcd(a - b, b);
    else
        return gcd(a, b - a);
        
}

int main() {
    int a, n, x;
    scanf("%d", &a);
    scanf("%d", &n);
    int count = 0;
    while(n--) {
        scanf("%d", &x);
        if(gcd(a, x) != 1)
            count++;
    }
    printf("%d", count);
    return 0;
}
