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
    int n;
    cin >> n;
    string s;
    for(int i = 0 ; i < n ; ++i) {
        if(i & 1)
            s += "I love";
        else
            s += "I hate";
        if(i < n - 1)
            s += " that ";
    }
    s += " it";
    cout << s ;
    return 0;
}

