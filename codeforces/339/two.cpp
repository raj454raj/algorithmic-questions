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

int compute(string s) {
    if(s.size() == 0)
        return -1;
    if(s.size() == 1) {
        if(s[0] == '1')
            return 0;
        else if(s[0] == '0')
            return -2;
        else
            return -1;
    }
    if(s[0] != '1')
        return -1;
    int cnt = 0;
    for(int i = 1 ; i < s.size() ; ++i) {
        if(s[i] == '0')
            cnt += 1;
        else {
            return -1;
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin >> n;
    string s, only="bad";
    ll sum = 0;
    int tmp, flag = 0;
    for(int i = 0 ; i < n ; ++i) {
        cin >> s;
        tmp = compute(s);
        if(tmp == -2) {
            flag = 1;
            break;
        }
        else if(tmp == -1) {
            only = s;
        }
        else {
            sum += tmp;
        }
    }
    if(flag) {
        cout << 0;
        return 0;
    }
    if(only == "bad") {
        cout << 1;
    }
    else {
        cout << only;
    }
    for(int i = 0 ; i < sum ; ++i)
        cout << 0;
    return 0;
}

