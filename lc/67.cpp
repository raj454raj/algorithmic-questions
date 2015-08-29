#include<bits/stdc++.h>
using namespace std;
string addBinary(string a, string b) {
    string s, tmp;
    s = "";

    if(a.length() < b.length()) {
        tmp = a;
        a = b;
        b = tmp;
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    int sum = 0;
    for(string::iterator i = a.begin(), j = b.begin() ; i != a.end() ; i++) {
        
        if(j != b.end()) {
            sum = *i + *j + carry - '0' - '0';
            if(sum == 3) {
                s.push_back('1');
                carry = 1;
            }
            else if(sum == 2) {
                s.push_back('0');
                carry = 1;
            }
            else {
                s.push_back((char)(sum + '0'));
                carry = 0;
            }
            j++;
        }
        else {
            sum = *i + carry - '0';
            if(sum == 2) {
                s.push_back('0');
                carry = 1;
            }
            else {
                s.push_back((char)(sum + '0'));
                carry = 0;
            }
        }
    }
    if(carry == 1)
        s.push_back('1');
    reverse(s.begin(), s.end());
    s.erase(0, s.find_first_not_of('0'));
    if(s == "")
        s = "0";
    return s;
}

int main() {
    string s1, s2;
    s1 = "000";
    s2 = "00";
    cout << addBinary(s1, s2);
    return 0;
}
