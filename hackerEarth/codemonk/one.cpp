#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int t;
    cin >> t;
    while(t--) {
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
        s.clear();
    }
    return 0;
}
