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
int firstUniqChar(string s) {
    int a[26] = {0};
    for(int i = 0 ; i < s.size() ; ++i)
        a[s[i] - 'a']++;
    for(int i = 0 ; i < s.size() ; ++i) {
        if(a[s[i] - 'a'] == 1)
            return i;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << firstUniqChar(s);
    return 0;
}

