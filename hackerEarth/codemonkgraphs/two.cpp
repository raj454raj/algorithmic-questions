#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, n, sum = 0;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; ++i) {
        scanf("%d", &x);
        sum += x;
    }
    if(sum == 2 * (n - 1))
        printf("Yes");
    else
        printf("No");
    return 0;
}
