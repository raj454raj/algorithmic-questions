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
void swap(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

int main() {
    ios_base::sync_with_stdio(0);
    string s1, s2;
    cin >> s1 >> s2;
    s1.erase(0, s1.find_first_not_of('0'));
    if(s1 == "")
        s1 = "0";
    sort(s1.begin(), s1.end());
    int i = 0;
    while(i < s1.size() && s1[i] == '0') {
        ++i;
    }
    if(i < s1.size() && i > 0)
        swap(&s1[i], &s1[0]);
    if(s1 == s2)
        cout << "OK";
    else
        cout << "WRONG_ANSWER";
    return 0;
}

