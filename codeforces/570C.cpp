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
bool comp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int i, x, start = -1, regions = 0, total_length = 0;
    char c, tmp;
    for(i = 0 ; i < n ; ++i) {
        if(s[i] == '.') {
            if(start == -1)
                start = i;
            continue;
        }
        else {
            if(start != -1) {
                total_length += i - start;
                regions++;
            }
            start = -1;
        }
    }
    if(start != -1) {
        total_length += i - start;
        regions++;
    }
    while(m--) {
        cin >> x >> c;
        tmp = s[x - 1];
        if(tmp != c) {
            if(x > 1 && x < n) {
                if(tmp != '.' && c == '.') {
                    if(s[x - 2] == '.' && s[x] == '.') {
                        regions--;
                        total_length++;
                    }
                    else if(s[x - 2] == '.' || s[x] == '.') {
                        total_length++;
                    }
                    else if(s[x - 2] != '.' && s[x] != '.') {
                        regions++;
                        total_length++;
                    }
                }
                else if(tmp == '.' && c != '.') {
                    if(s[x - 2] == '.' && s[x] == '.') {
                        regions++;
                        total_length--;
                    }
                    else if(s[x - 2] == '.' || s[x] == '.') {
                        total_length--;
                    }
                    else if(s[x - 2] != '.' && s[x] != '.') {
                        regions--;
                        total_length--;
                    }
                }
            }
            else if(x > 1) {
                if(tmp != '.' && c == '.') {
                    if(s[x - 2] == '.') {
                        total_length++;
                    }
                    else if(s[x - 2] != '.') {
                        regions++;
                        total_length++;
                    }
                }
                else if(tmp == '.' && c != '.') {
                    if(s[x - 2] == '.') {
                        total_length--;
                    }
                    else if(s[x - 2] != '.') {
                        regions--;
                        total_length--;
                    }
                }

            }
            else if(x < n) {
                if(tmp != '.' && c == '.') {
                    if(s[x] == '.') {
                        total_length++;
                    }
                    else if(s[x] != '.') {
                        regions++;
                        total_length++;
                    }
                }
                else if(tmp == '.' && c != '.') {
                    if(s[x] == '.') {
                        total_length--;
                    }
                    else if(s[x] != '.') {
                        regions--;
                        total_length--;
                    }
                }
            }
        }
        s[x - 1] = c;
        if(total_length - regions > 0)
            cout << total_length - regions << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
