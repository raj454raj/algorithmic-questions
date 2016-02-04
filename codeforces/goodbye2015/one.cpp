#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int toInt(string s) {
    int val;
    istringstream ss(s);
    ss >> val;
    return val;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string a, b, c;
    cin >> a >> b >> c;
    if(c == "week") {
        if(a == "5" || a == "6") {
            cout << 53;
        }
        else
            cout << 52;
    }
    else {
        int tmp = toInt(a);
        if(tmp == 30) {
            cout << 11;
        }
        else if(tmp == 31) {
            cout << 7;
        }
        else {
            cout << 12;
        }
    }
    return 0;
}

