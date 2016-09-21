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
    int start, minus1, plus1, zeroindex;
    vector<int> aux(n, 0);
    int prev, curr;
    cin >> prev;
    for(int i = 1 ; i < n ; ++i) {
        cin >> curr;
        aux[i] = curr - prev;
        prev = curr;
    }
    for(int i = 0 ; i < n ; ++i) {
        cout << aux[i] << " ";
    }
    zeroindex = -1, minus1 = 0, plus1 = 0, sum = 0;
    int ans = 1;
    for(int i = 0 ; i < n ; ++i) {
        sum += aux[i];
        if(zeroindex == -1 && aux[i] == 0) {
            zeroindex = i;
            start = zeroindex;
        }
        if(zeroindex == -1 && aux[i] != 0)
            start = i;
        if(aux[i] == -1 && minus1) {
            minus1 = plus1 = 0;
            ans = max(ans, i - start + 1);
        }
            minus1 = 1;
        if(aux[i] == 1)
            plus1 = 1;
        if(sum == 0 && minus1 && plus1) {
            minus1 = plus1 = 0;
        }
    }

    return 0;
}

