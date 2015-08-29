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
int addDigits(int num) {
    int res = num % 9;
    if(num == 0)
        return 0;
    if(res == 0)
        return 9;

    return num % 9;
}
int main() {
    int n;
    cin >> n;
    cout << addDigits(n);
    return 0;
}

