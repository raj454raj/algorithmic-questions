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

    int n, t, x, min, max, minind, maxind, flag, pos, start;
    t = readnum();
    vector<int> v, s;

    vector<int>::iterator it;
    while(t--) {
        n = readnum();
        for(int i = 0 ; i < n ; i++) {
            x = readnum();
            v.push_back(x);
        }
        minind = 0;
        maxind = 0;
        min = v[0];
        max = v[0];
        s.push_back(v[0]);
        for(int i = 1 ; i < n ; i++) {
            if(v[i] >= max) {
                s.push_back(v[i]);
                maxind++;
                max = v[i];
            }
            else if(v[i] < min) {
                if(minind == maxind)
                    max = v[i];
                s[minind] = v[i];
                min = v[i];
            }
            else {
                it = upper_bound(s.begin(), s.end(), v[i]);
                if(it == s.end() - 1) {
                    max = v[i];
                }
                *it = v[i];
            }
        }
        printf("%d ", (int)s.size());
        for(int i = 0 ; i < s.size() ; ++i) {
            printf("%d ", s[i]);
        }
        s.clear();
        v.clear();
        cout << endl;
    }
    return 0;
}

