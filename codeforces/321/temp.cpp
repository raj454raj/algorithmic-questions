#include<bits/stdc++.h>
//#define g getchar_unlocked
#define ll long long int
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
int main() {
    int n;
    int arr[] = {4,11,23,41,43, 48, 50};
    vector<int> v(arr, arr+6);
    cout << *lower_bound(v.begin(), v.end(), 48);

    return 0;
}

