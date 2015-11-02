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
    string s;
    vector<string> v(8);
    for(int i = 0 ; i < 8 ; ++i) {
        cin >> s;
        v[i] = s;
    }
    int flag;
    int amin = INT_MAX, bmin = INT_MAX;
    for(int i = 0 ; i < 8 ; ++i) {
        for(int j = 0 ; j < v[i].size() ; ++j) {
            if(v[i][j] == 'B') {
                flag = 0;
                for(int k = i + 1 ; k < 8 ; ++k) {
                    if(v[k][j] != '.') {
                        flag = 1;
                        break;
                    }
                }
                if(!flag) {
                    if(bmin > 7 - i)
                        bmin = 7 - i;
                }
            }
            else if(v[i][j] == 'W') {
                flag = 0;
                for(int k = 0 ; k < i ; ++k) {
                    if(v[k][j] != '.') {
                        flag = 1;
                        break;
                    }
                }
                if(!flag) {
                    if(amin > i)
                        amin = i;
                }
            }
        }
    }
    if(amin <= bmin)
        cout << "A";
    else
        cout << "B";
    return 0;
}

