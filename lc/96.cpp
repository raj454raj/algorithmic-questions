#include<bits/stdc++.h>
using namespace std;
int arr[1000];

/*int numtrees(int n) {
    if(arr[n] != -1)
        return arr[n];
    if(n == 0 || n == 1) {
        arr[n] = 1;
        return arr[n];
    }
    else {
        arr[n] = 0;
        for(int i = 1 ; i <= n ; ++i) {
            arr[n] += numtrees(n - i) * numtrees(i - 1);
        }
        return arr[n];
    }
}

int numTrees(int n) {
    for(int i = 0 ; i <= n ; ++i)
        arr[i] = -1;
    return numtrees(n);
}*/
int numTrees(int n) {
    long double tmp = 1;
    for(int i = 2 ; i <= n ; ++i) {
        tmp *= (long double)(((n + i) * 1.0));
    }
    for(int i = 2 ; i <= n ; ++i)
        tmp /= i;
    return int(tmp);
}
int main() {
    int n;
    cin >> n;
    cout << numTrees(n) << endl;
    return 0;
}
