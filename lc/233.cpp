#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int

#define ull unsigned long long int
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

vector<int>::iterator mylower(vector<int>& v, int x) {
    vector<int>::iterator it = lower_bound(v.begin(), v.end(), x);
    if(*it == x)
        return it;
    else if(it != v.begin()) {
        return (it - 1);
    }
    return v.begin();
}

int d(vector<int>& v, int n) {
    if(n <= 0)
        return 0;
    if(n <= 9)
        return 1;
    vector<int>::iterator it = mylower(v, n);
    return *it + d(v, n - (it - v.begin()) * 10);
}
int countDigitOne(int n) {
    if(n <= 0)
        return 0;
    if(n <= 9)
        return 1;

    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    ull sum = 10;
    int i = 2;
    while(sum + 8 * v[i - 1] <= n) {
        v.push_back(sum + 8 * v[i - 1]);
        sum = sum * 10;
        ++i;
    }
    for(int i = 0 ; i < v.size() ; ++i) {
        cout << v[i] << endl;
    }
    return d(v, n);
}

int main() {
    int n;
    n = readnum();
    cout << countDigitOne(n);
    return 0;
}

