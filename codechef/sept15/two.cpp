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
int main() {
    int t, n, m, a, b, count;
    t = readnum();
    vector<int> v;
    deque<int> l;
    while(t--) {
        n = readnum();
        m = readnum();
        v.resize(m);
        for(int i = 0 ; i < m ; ++i) {
            v[i] = readnum();
        }
        sort(v.begin(), v.end());
        for(int i = 0 ; i < v.size() ; ++i) {
            l.push_back(v[i]);
        }
        count = 0;
        while(l.size() > 2) {
            l.front()--;
            if(!l.front())
                l.pop_front();
            count++;
            a = l.back();
            l.pop_back();
            b = l.back();
            l.pop_back();
            l.push_back(a + b + 1);
        }
        if(l.size() == 2)
            count++;
        l.clear();
        v.clear();
        cout << count << endl;
    }
    return 0;
}

