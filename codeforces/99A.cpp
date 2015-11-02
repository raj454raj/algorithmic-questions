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
    string s;
    cin >> s;
    string::iterator it = find(s.begin(), s.end(), '.');
    if(it == s.end()) {
        cout << s;
    }
    else if(*(it - 1) == '9')
        cout << "GOTO Vasilisa.";
    else {
        if(*(it + 1) < '5') {
            for(string::iterator i = s.begin() ; i != it ; ++i) {
                cout << *i;
            }
        }
        else {
            *(it - 1)  = *(it - 1) + 1;
            for(string::iterator i = s.begin() ; i != it ; ++i) {
                cout << *i;
            }
        }
    }
    return 0;
}
