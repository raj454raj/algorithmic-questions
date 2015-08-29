#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i, x;
    scanf("%d", &n);
    vector<int> a, b;
    for(i = 0 ; i < n ; i++) {
        scanf("%d", &x);
        a.push_back(x);
    }
    for(i = 0 ; i < n ; i++) {
        scanf("%d", &x);
        b.push_back(x);
    }
    int sum = 0;
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());
    for(i = 0 ; i < n - 1 ; i++) {
        if(b[i+1] == a[i])
            sum += 50;
        else if(b[i+1] < a[i])
            sum += 100;
    }
    cout << sum;
    return 0;
}
