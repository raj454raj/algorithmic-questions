#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s) {
    string tmp = s;
    reverse(s.begin(), s.end());
    if(tmp == s)
        return true;
    return false;
}

int main() {
    string s = "asdsa";
    cout << ispalindrome(s);
    return 0;
}
