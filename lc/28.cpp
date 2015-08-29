#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1(""), s2("");
    size_t n = s1.find(s2);
    if(n == string::npos) {
        n = -1;
    }
    cout << int(n);
    return 0;
}
