#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    char a[102][102];
    for(int i = 0 ; i < n ; ++i) {
        for(int j = 0 ; j < n ; ++j) {
            cin >> a[i][j];
        }
    }

    ll cnt = 0, sum = 0;
    for(int i = 0 ; i < n ; ++i) {
        cnt = 0;
        for(int j = 0 ; j < n ; ++j) {
            if(a[i][j] == 'C')
                cnt++;
        }
        sum += (cnt * (cnt - 1)) / 2;
    }
    for(int i = 0 ; i < n ; ++i) {
        cnt = 0;
        for(int j = 0 ; j < n ; ++j) {
            if(a[j][i] == 'C')
                cnt++;
        }
        sum += (cnt * (cnt - 1)) / 2;
    }
    cout << sum;
    return 0;
}

