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
char a[10][10];
int nrA, nrB;
int main() {
    ll n;
    for(int i = 1 ; i <= 8 ; i++) {
        for(int j = 1 ; j <= 8 ; ++j) {
            cin >> a[i][j];
        }
    }
    for(int i = 2 ; i <= 8 ; ++i) {
        for(int j = 1 ; j <= 8 ; ++j) {
            if(a[i][j] == 'W') {
                for(int q = i - 1 ; q > 0 ; q--) {
                    if(a[q][j] == 'B') {
                        nrA = 0; break;
                    }
                    else
                        nrA++;
                }
            }
            if(nrA != 0 ) break;
        }
        if(nrA != 0) break;
    }
    for(int i = 7; i > 0 ; i--) {
        for(int j = 1 ; j <= 8 ; j++) {
            if(a[i][j] == 'B') {
                for(int  q = i+ 1 ; q <=9 ;q++) {
                    if(a[q][j] == 'W') {nrB=0; break;}
                    else
                        nrB++;
                }
            }
            if(nrB)
                break;
        }
        if(nrB)break;
    }
    if(nrA < nrB)
        cout << "A";
    else
        cout << "B";
    return 0;
}

