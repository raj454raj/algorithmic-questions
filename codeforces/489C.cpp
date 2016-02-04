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

string toString(int v) {
    ostringstream ss;
    ss << v;
    return ss.str();
}

string getMax(int m, int s) {
    if(!s && !m)
        return "";
    if(s == 0 && m != 0) {
        string tmp = "";
        for(int i = 0 ; i < m ; ++i)
            tmp += "0";
        return tmp;
    }
    else {
        if(s >= 9) {
            return "9" + getMax(m - 1, s - 9);
        }
        else {
            string tmp = toString(s);
            return tmp + getMax(m - 1, 0);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int m, s;
    cin >> m  >> s;
    if(m * 9 < s || (s == 0 && m != 1)) {
        cout << "-1 -1";
    }
    else {
        string tmp = getMax(m, s);
        string max_str = tmp;
        reverse(tmp.begin(), tmp.end());
        if(tmp[0] == '0') {
            for(int i = 0 ; i < tmp.size() ; ++i) {
                if(tmp[i] != '0') {
                    tmp[i] = tmp[i] - 1;
                    tmp[0] = '1';
                    break;
                }
            }
        }
        cout << tmp << " " << max_str;
    }
    return 0;
}

