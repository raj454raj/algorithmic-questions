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
int left[1000005], right[1000005];
int main() {
    int x, n, m;
    n = readnum();
    m = readnum();
    vector<int> v, left, right;
    for(int i = 0 ; i < n ; ++i) {
        x = readnum();
        v.push_back(x);
        left[i] = 0;
        right[i] = n - 1;
    }
    stack<int> s;

    return 0;
}

