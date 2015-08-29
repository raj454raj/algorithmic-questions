#include<bits/stdc++.h>
using namespace std;
int numZeroes(int n) {
    if(n < 5)
        return 0;
    else
        return n/5 + numZeroes(n/5);
}
void optimize() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main() {
    optimize();
    int n, t;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        printf("%d\n", numZeroes(n));
    }
    return 0;
}
