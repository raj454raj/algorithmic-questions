#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
    if(s.size() != t.size())
        return false;
    int a[26] = {0};
    int b[26] = {0};
    for(int i = 0 ; i < s.size() ; i++) {
        a[s[i] - 'a']++;
        b[t[i] - 'a']++;
    }
    for(int i = 0 ; i < 26 ; ++i) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    cout << isAnagram(a, b);
    return 0;
}
