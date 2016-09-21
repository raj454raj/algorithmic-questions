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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> v(n);
    unordered_map<string, int> m;
    for(int i = 0 ; i < n ; ++i) {
        cin >> v[i];
        m[v[i]] = 1;
    }

    int tmp = m.size();
    for(int i = n - 1 ; i >= 0 ; --i) {
        if(m[v[i]] == 1) {
            m[v[i]] = 2;
            cout << v[i] << endl;
            tmp--;
        }
        if(tmp == 0)
            break;
    }
    return 0;
}

