#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main() {
    string s;
    if(getline(cin, s)) {
        int n = s.length();
        int count[100] = {0};
        int cnt = 0;
        s[0] = s[0] + 32;
        int spcnt = 0;
        for(int i = 0 ; i < n ; ++i) {
            if(s[i] >= 'A' && s[i] <= 'Z')
                cnt++;
            if(s[i] == ' ')
                spcnt++;
            count[i] = cnt;
        }
        int flag;
        for(int i = n - spcnt - 1 ; i >= 0 ; i--) {
            flag = 0;
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
                flag = 1;
            }
            s[i + count[i]] = s[i];
            if(flag)
                s[i + count[i] - 1] = ' ';

        }
        cout << s;
    }

    return 0;
}
