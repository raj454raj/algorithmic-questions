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
    int n, t, k, l;
    string s;
    char str[10];
    vector<string> v;
    map<string, int> m;
    t = readnum();
    while(t--) {
        n = readnum();
        k = readnum();
        for(int i = 0 ; i < n ; i++) {
            scanf("%s", str);
            s = str;
            m[s] = 1;
            v.push_back(s);
        }
        for(int i = 0 ; i < k ; ++i) {
            l = readnum();
            while(l--) {
                scanf("%s", str);
                s = str;
                m[s] = 2;
            }
        }
        for(int i = 0 ; i < n ; ++i) {
            if(m[v[i]] == 2)
                printf("YES ");
            else
                printf("NO ");
        }
        m.clear();
        v.clear();
        printf("\n");
    }
    return 0;
}

