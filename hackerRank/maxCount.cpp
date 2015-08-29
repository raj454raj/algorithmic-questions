#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int a[26] = {0};
    for(int i = 0 ; s[i] ; i++) {
        a[s[i] - 'a']++;
    }
    int max = 0;
    char c = 'a';
    for(int i = 0 ; i < 26 ; i++) {
        if(a[i] > max) {
            max = a[i];
            c = (char)(i + 'a');
        }
    }
    cout << c;
    return 0;
}
