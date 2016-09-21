#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int m, n;
    cin >> m >> n;
    int count = 0, flag = 0;
    int row[1010] = {0};
    int col[1010] = {0};
    char s[1010][1010];
    for(int i = 0 ; i < m ; ++i) {
        for(int j = 0 ; j < n ; ++j) {
            cin >> s[i][j];
            if(s[i][j] == '*') {
                count++;
                row[i]++;
                col[j]++;
            }
        }
    }
    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < n ; ++j) {
            if(s[i][j] == '*') {
                if(row[i] + col[j] == count + 1) {
                    cout << "YES\n" << i + 1 << " " << j + 1;
                    flag = 1;
                    break;
                }
            }
            else {
                if(row[i] + col[j] == count) {
                    cout << "YES\n" << i + 1 << " " << j + 1;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag)
            break;
    }
    if(!flag) {
        cout << "NO";
    }
    return 0;
}

