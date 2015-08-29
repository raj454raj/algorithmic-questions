#include<bits/stdc++.h>
using namespace std;
struct conv {
    int num;
    string str;
    conv(int x, string s): num(x), str(s) {};
};
conv c[13] = {conv(1, "I"),
              conv(4, "IV"),
              conv(5, "V"),
              conv(9, "IX"),
              conv(10, "X"),
              conv(40, "XL"),
              conv(50, "L"),
              conv(90, "XC"),
              conv(100, "C"),
              conv(400, "CD"),
              conv(500, "D"),
              conv(900, "CM"),
              conv(1000, "M")
              };

int RomanToInt(string s) {
    int n = 0;
    for(int i = 0 ; s[i] ; i++) {
        for(int j = 12 ; j >= 0 ; j--) {
            if(c[j].str.size() == 1) {
                if(c[j].str[0] == s[i]) {
                    n += c[j].num;
                    break;
                }
            }
            else if(c[j].str.size() == 2) {
                if(c[j].str[0] == s[i] && c[j].str[1] == s[i + 1]) {
                    n += c[j].num;
                    i++;
                    break;
                }
            }
        }
    }
    return n;
}

int main() {
    string s;
    cin >> s;
    cout << RomanToInt(s);
    return 0;
}
