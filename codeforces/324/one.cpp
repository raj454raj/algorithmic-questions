#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int n, t;
    cin >> n >> t;
    if(t <= 9) {
        for(int i = 0 ; i < n ; ++i)
            cout << t;
    }
    else {
        if(n == 1 && t == 10)
            cout << -1;
        else {
            cout << 1;
            for(int i = 0 ; i < n - 1 ; ++i) {
                cout << 0;
            }
        }
    }
    return 0;
}

