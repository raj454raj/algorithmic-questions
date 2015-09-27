#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n, x;
    scanf("%d", &n);
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i) {
        scanf("%d", &x);
        v[i] = x;
    }

    sort(v.begin(), v.end());
    vector<int> pre1(n), pre2(n);
    int sum = 0;
    for(int i = 0 ; i < n ; ++i) {
        sum += v[i];
        pre1[i] = sum;
    }

    sum = 0;
    for(int i = 0 ; i < n ; ++i) {
        sum += v[n - i - 1];
        pre2[i] = sum;
    }
    int a = (upper_bound(pre1.begin(), pre1.end(), sum / 2) - pre1.begin()) + 1;
    int b = (upper_bound(pre2.begin(), pre2.end(), sum / 2) - pre2.begin()) + 1;
    if(!a)
        a = n - a;
    if(!b)
        b = n - b;
    a = min(a, b);
    printf("%d", a);
    return 0;
}

