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
    int flag = 0;
    string res = "";
    for(int i = 0 ; i < s.size() ; ++i) {
        if(!flag && s[i] == 'a')
            res += "a";
        else if(!flag && s[i] != 'a') {
            flag = 1;
            res += (char)(s[i] - 1);
        }
        else if(flag == 1 && s[i] == 'a') {
            flag = 2;
            res += s[i];
        }
        else if(flag == 1)
            res += (char)(s[i] - 1);
        else
            res += s[i];
    }
    if(!flag)
        res[res.size() - 1] = 'z';
    cout << res;
    return 0;
}

