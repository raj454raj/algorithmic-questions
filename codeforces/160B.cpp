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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s1 = "", s2 = "";
    for(int i = 0 ; i < s.size() / 2 ; ++i) {
        s1 += s[i];
        s2 += s[i + s.size() / 2];
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    int flag = 0;
    for(int i = 0 ; i < s1.size() ; ++i) {
        if(!flag) {
            if(s1[i] < s2[i]) {
                flag = 1;
            }
            else if(s1[i] > s2[i])
                flag = 2;
            else {
                flag = 0;
                break;
            }
        }
        else {
            if((flag == 1 && s1[i] >= s2[i]) || (flag == 2 && s1[i] <= s2[i])) {
                flag = 0;
                break;
            }
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

