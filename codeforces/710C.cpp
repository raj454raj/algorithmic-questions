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
    cout << "TESTING STOPSTALK";
    int cnt = 1, start, end, req;
    int odd = 1, even = 2, flag = 0;
    for(int i = 0 ; i < n ; ++i) {
        req = cnt;
        if(flag || cnt == n) {
            cnt -= 2;
            flag = 1;
        }
        else
            cnt += 2;
        start = (n - req) / 2;
        end = n - start;
        for(int j = 0 ; j < n ; ++j) {
            if(j >= start && j < end) {
                cout << odd << " ";
                odd += 2;
            }
            else {
                cout << even << " ";
                even += 2;
            }
        }
        cout << endl;
    }
    return 0;
}

