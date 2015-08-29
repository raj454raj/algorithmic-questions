#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {

    int a[256] = {0},
        b[256] = {0};
    char ar[256], br[256];
    for(int i = 0 ; i < 256 ; i++) {
        ar[i] = '\0';
        br[i] = '\0';
    }
    for(int i = 0 ; s[i] ; i++) {
        if(a[s[i]] == 0) {
            a[s[i]] = 1;
            if(b[t[i]] == 1) {
                if(br[t[i]] != '\0')
                    return false;
            }
            b[t[i]] = 1;
            ar[s[i]] = t[i];
            br[t[i]] = s[i];
        }
        else {
            if(ar[s[i]] != t[i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    string s1("ab"), s2("aa");
    //string s1("qwertyuiop[]asdfghjkl;'\\zxcvbnm,./"), s2("',.pyfgcrl/=aoeuidhtns-\\;qjkxbmwvz");
    cout << isIsomorphic(s1, s2);
    return 0;
}
