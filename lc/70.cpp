#include<bits/stdc++.h>
using namespace std;


int arr[1000000];
int climb_stairs(int n) {
    if(arr[n] != -1)
        return arr[n];
    if(n <= 2) {
        arr[n] = n;
        return n;
    }
    else {
        arr[n] = climb_stairs(n - 1) + climb_stairs(n - 2);
        return arr[n];
    }
}
int climbStairs(int n) {
    for(int i = 0 ; i <= n + 1 ; ++i)
        arr[i] = -1;
    return climb_stairs(n);
}

int main() {
    int n;
    cin >> n;
    cout << climbStairs(n);
    return 0;
}
