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
    string s;
    cin >> s;
    if(s[1] == '8' || s[1] == '1') {
        if(s[0] == 'a' || s[0] == 'h')
            cout << 3;
        else
            cout << 5;
    }
    else if(s[0] == 'a' || s[0] == 'h') {
        if(s[1] == '8' || s[1] == '1')
            cout << 3;
        else
            cout << 5;
    }
    else
        cout << 8;
    return 0;
}

