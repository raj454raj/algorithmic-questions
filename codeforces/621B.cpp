#include<bits/stdc++.h>
#define ll long long int
//#define g getchar_unlocked
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, x, y;
    cin >> n;
    int arr[400004] = {0};
    unordered_map<int, int> m;
    for(ll i = 0 ; i < n ; ++i) {
        cin >> x >> y;
        if(x + y >= 3 && x + y <= 2001) {
            arr[x + y]++;
        }
        if(abs(x - y) <= 999) {
            m[x - y] += 1;
        }
    }
    ll sum = 0;
    for(int i = 3 ; i <= 2001 ; ++i) {
        if(arr[i] >= 2) {
            sum += (arr[i] * (arr[i] - 1)) / 2;
        }
    }
    for(unordered_map<int, int>::iterator it = m.begin() ; it != m.end() ; ++it) {
        if(it->second >= 2) {
            sum += (it->second * (it->second - 1)) / 2;
        }
    }
    cout << sum;
    return 0;
}

