#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int firstBadVersion(int n) {
    int lower = 1, upper = n, mid;
    while(lower < upper) {
        mid = lower + (upper - lower) / 2;
        if(!isBadVersion(mid))
            lower = mid + 1;
        else
            upper = mid;
    }
    return lower;
}

int main() {
    int n;
    cin >> n;
    cout << firstBadVersion(n);
    return 0;
}

