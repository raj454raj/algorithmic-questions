#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define m 1000000007
//#define g getchar_unlocked
using namespace std;
ull ar[100005], br[100005];
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
ull getcount(ull a, ull b, ull k) {
    ull cnt = 0;
    if(b != 0)
        cnt++;
    ull p = pow(10, k - 1);
    if(a < p) {
        cnt += p / a;
    }

    ull tmp = (p / a) * a + a;
    while(tmp / p < 10) {
        if(tmp / p != b)
            cnt++;
        tmp += a;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    ull n, k;
    cin >> n >> k;
    ull nbyk = n / k;
    for(int i = 0 ; i < nbyk ; ++i) {
        cin >> ar[i];
    }
    for(int i = 0 ; i < nbyk ; ++i) {
        cin >> br[i];
    }
    ull res = 1, tmp;
    for(int i = 0 ; i < nbyk ; ++i) {
        tmp = getcount(ar[i], br[i], k);
        res = (res * tmp) % m;
        cout << tmp << endl;
    }
    cout << res;
    return 0;
}
