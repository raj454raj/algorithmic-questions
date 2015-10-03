#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

string tostr(int n) {
    stringstream ss;
    ss << n;
    return ss.str();
}

bool ispal(int n) {
    string s1 = tostr(n);
    int i = 0, j = s1.size() - 1;
    while(i < j) {
        if(s1[i] == s1[j]) {
            i++;
            j--;
        }
        else
        return false;
    }
    return true;
}

vector<int> v(100003);
int main() {
    int t, l, r;
    t = readnum();
    int sum = 0;
    for(int i = 1 ; i <= 100002 ; ++i) {
        if(ispal(i)) {
            sum += i;
        }
        v[i] = sum;
    }
    while(t--) {
        l = readnum();
        r = readnum();
        sum = v[r] - v[l];
        if(ispal(l))
            sum += l;
        printf("%d\n", sum);
    }
    return 0;
}

