#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int count, n, t, i, j;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t--) {
        i = 0;
        while(i < s.size()) {
            if(s[i] == 'B') {
                j = i + 1;
                if(j < s.size() && s[j] == 'G') {
                    s[i] = 'G';
                    s[j] = 'B';
                    i = j + 1;
                }
                else
                    i++;
            }
            else
                i++;
        }
    }
    cout << s;
    return 0;
}

