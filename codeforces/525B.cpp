#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void temp(int i) {
    cout << i << " ";
}
int main() {
    int n, x, m;
    string s;
    cin >> s;
    vector<int> mask(s.size(), 0);
    scanf("%d", &m);
    for(int i = 0 ; i < m ; ++i) {
        scanf("%d", &x);
        mask[x - 1]++;
    }
    char c;
    ll cnt = 0;
    for(int i = 0 ; i < s.size() / 2 ; ++i) {
        mask[i] %= 2;
        cnt += mask[i];
        if(cnt&1) {
            c = s[i];
            s[i] = s[s.size() - i - 1];
            s[s.size() - i - 1] = c;
        }
    }
    cout << s;
    return 0;
}

