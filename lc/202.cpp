#include<bits/stdc++.h>
using namespace std;
bool isHappy(int n) {
    int i, ar[300] = {0};
    int N, k, sum;
    char str[1000];
    N = n;
    while(1) {
        k = 0;
        sum = 0;
        while(N) {
            str[k++] = N%10 + '0';
            sum += (N%10) * (N%10);
            N /= 10;
        }
        if(ar[sum] == 1)
            return false;
        ar[sum] = 1;
        if(sum == 1)
            return true;
        N = sum;
    }
    return false;
}
    
int main() {
    int n;
    cin >> n;
    cout << isHappy(n);
    return 0;
}
