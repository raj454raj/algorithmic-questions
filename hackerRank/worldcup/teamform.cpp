#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}
int main() {
    vector<int> v(10);
    int x;
    for(int i = 0 ; i < 10 ; ++i) {
        x = readnum();
        v[i] = x;
    }
    sort(v.begin(), v.end());
    int sum = v[9] + v[7] + v[5];
    printf("%d", sum);
    return 0;
}

