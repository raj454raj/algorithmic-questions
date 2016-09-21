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
int compute_count(string s) {
    int a[26] = {0};
    int count = 0;
    for(int i = 0 ; s[i] ; ++i) {
        if(s[i] != ' ') {
            a[s[i] - 'A']++;
            if(a[s[i] - 'A'] == 1)
                count++;
        }
    }
    return count;
}

string get_smaller(string a, string b) {
    return a.compare(b) ? b : a;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    string s;
    getline(cin, s);
    cout << s;
    string line, l = "";
    int m = 0, tmp;
    while(t--) {
        cin >> n;
        m = 0;
        l = "";
        for(int i = 0 ; i < n ; i++) {
            if(std::getline(std::cin, line)) {
                tmp = compute_count(line);
                if (tmp > m) {
                    m = tmp;
                    l = line;
                }
                else if(tmp == m) {
                    l = get_smaller(line, l);
                }
            }
        }
        cout << l << endl;
    }

    return 0;
}

