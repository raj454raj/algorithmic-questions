#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    ll n, m, x;
    cin >> n >> m;
    int flag = 0, count = 0, prev;
    for(int i = 0 ; i < 2 * m * n ; ++i) {
        cin >> x;
        if(!flag) {
            prev = x;
            flag = 1;
        }
        else {
            if(prev == 1 || x == 1)
                count++;
            flag = 0;
        }
    }
    cout << count;
    return 0;
}

