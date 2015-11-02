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
    ios_base::sync_with_stdio(0);
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0 ; i < s1.size() ; ++i) {
        if(s1[i] != s2[i]) {
            s1[i] = '1';
        }
        else
            s1[i] = '0';
    }
    cout << s1;
    return 0;
}

