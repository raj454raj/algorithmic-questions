#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
int nthUglyNumber(int n) {
    if(n == 1)
        return 1;
    int *ugly = (int *)malloc((n + 1) * sizeof(int));
    ugly[0] = 1;
    int two = 2, curr = 1, three = 3, five = 5;
    int i2, i3, i5;
    i2 = i3 = i5 = 0;
    for(int i = 1 ; i < n ; ++i) {
        curr = min(two, min(three, five));
        ugly[i] = curr;
        if(curr == two) {
            i2++;
            two = ugly[i2] * 2; 
        }
        if(curr == three) {
            i3++;
            three = ugly[i3] * 3;
        }
        if(curr == five) {
            i5++;
            five = ugly[i5] * 5;
        }
    }
    return curr;
}
int main() {
    int n;
    cin >> n;
    cout << nthUglyNumber(n) << endl;
    return 0;
}

