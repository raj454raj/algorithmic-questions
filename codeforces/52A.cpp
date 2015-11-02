#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int n, x;
    scanf("%d", &n);
    int arr[3] = {0};
    for(int i = 0 ; i < n ; ++i) {
        scanf("%d", &x);
        arr[x - 1]++;
    }
    int max = 0;
    for(int i = 0 ; i < 3 ; ++i) {
        if(arr[i] > max)
            max = arr[i];
    }
    cout << n - max;
    return 0;
}

