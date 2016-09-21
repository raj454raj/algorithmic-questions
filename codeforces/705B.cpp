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
    int n, x;
    cin >> n;
    vector<int> v;
    vector<int> evens;
    int cnt = 0;
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        if(x % 2 == 0)
            cnt += 1;
        evens.push_back(cnt);
        v.push_back(x);
    }
    for(int i = 0 ; i < n ; ++i) {
        if(evens[i] == 0)
            cout << 2 << endl;
        else if(evens[i] & 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}

