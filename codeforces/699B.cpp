#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m;
    cin >> m >> n;
    char c;
    int a[1002] = {0};
    int b[1002] = {0};
    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < n ; ++j) {
            cin >> c;
            if (c == '*') {
                a[i]++;
                b[j]++;
            }
        }
        getchar();
    }
    int more_than_one = 0, flag = 0, x = -1, y = -1;
    int tmpx = -1, tmpy = -1;
    for(int i = 0 ; i < m ; ++i) {
        if(a[i] > 1) {
            x = i;
            more_than_one++;
            if(more_than_one > 1) {
                flag = 1;
                break;
            }
        }
        else if (a[i] == 1)
            tmpx = i;
    }
    if(flag) {
        cout << "NO";
        return 0;
    }
    more_than_one = 0;
    for(int i = 0 ; i < n ; ++i) {
        if(b[i] > 1) {
            y = i;
            more_than_one++;
            if(more_than_one > 1) {
                flag = 1;
                break;
            }
        }
        else if (b[i] == 1) {
            tmpy = i;
        }
    }
    if(flag) {
        cout << "NO";
        return 0;
    }
    if(y == -1 && x == -1) {
        if(tmpx == -1 && tmpy == -1) {
            cout << "YES\n1 1";
        }
        else if(tmpx + 1 && tmpy + 1)
            cout << "YES\n" << tmpx + 1 << " " << tmpy + 1;
        else {
            cout << "NO";
        }
        return 0;
    }
    else if(y == -1) {
        cout << "YES\n";
        cout << x + 1 << " " << tmpy + 1;
    }
    else if(x == -1) {
        cout << "YES\n";
        cout << tmpx + 1 << " " << y + 1;
    }
    else {
        cout << "YES\n";
        cout << x + 1 << " " << y + 1;

    }
    return 0;
}
