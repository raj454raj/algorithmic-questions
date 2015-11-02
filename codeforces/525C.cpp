#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll n, x;
    scanf("%I64d", &n);
    ll m = 0, mi=LONG_MAX;
    ll count[1000002] = {0};

    for(int i = 0 ; i < n ; ++i) {
        scanf("%I64d", &x);
        count[x]++;
        m = max(m, x);
        mi = min(mi, x);
    }
    for(int i = m ; i >= mi ; i--) {
        if(count[i]&1) {
            count[i]--;
            if(count[i - 1])
                count[i - 1]++;
        }
    }
    int state = 1;
    ll area = 0;
    ll prev;
    for(int i = m ; i >= mi ; i--) {
        if(state == 1) {
            area += (count[i] / 4) * i * i;
            if(count[i] % 4 == 2) {
                state = 2;
                prev = i;
            }
        }
        else {
            if(count[i] >= 2) {
                area += i * prev;
                count[i] -= 2;
                state = 1;
            }
            area += (count[i] / 4) * i * i;
            if(count[i] % 4 == 2) {
                state = 2;
                prev = i;
            }
        }
    }
    cout << area;
    return 0;
}
