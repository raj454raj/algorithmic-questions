#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int a[26] = {0};
    int b[26] = {0}; 
    for(int i = 0 ; s[i] ; i++) {
        if(a[s[i] - 'a'] == 0) {
            b[s[i] - 'a'] = count(s.begin(), s.end(), s[i]);
            a[s[i] - 'a'] = 1;
        }
    }
    int x = -1, y = -1, tmp;
    for(int i = 0 ; i < 26 ; i++) {
        if(b[i] != 0) {
            if(x != -1)
                x = b[i];
            else if(y != -1)
                y = b[i];
            else {
                tmp = x - y;
                if(tmp < 0)
                    tmp = -tmp;
                if(tmp > 1) {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    tmp = x - y;
    if(tmp < 0)
        tmp = -tmp;
    if(tmp > 1) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}
