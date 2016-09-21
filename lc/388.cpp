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

void recurse(int start) {

}

int lengthLongestPath(string input) {
    cout << input << endl;
    recurse(0);
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << lengthLongestPath(s);
    return 0;
}

