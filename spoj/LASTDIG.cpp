#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int t;
    long long int a, b;
    scanf("%lld", &t);
    int v[10][5] = {{0,0,0,0,0}, {1,0,0,0,0}, {2,4,8,6,0}, {3,9,7,1,0}, {4, 6,0,0,0}, {5,0,0,0,0}, {6,0,0,0,0}, {7, 9, 3, 1,0}, {8,4,2,6,0}, {9, 1,0,0,0}};
    int nums[10] = {1, 1, 4, 4, 2, 1, 1, 4, 4, 2};
    int dig = 0, exp;
    while(t--) {
        scanf("%lld%lld", &a, &b);
        if(b == 0) {
            cout << 1 << endl;
        }
        else {
            dig = a%10;
            exp = (b-1)%nums[dig];
            cout << v[dig][exp] << endl;
        }
    }
    return 0;
}
