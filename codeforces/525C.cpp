#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll n, x;
    cin >> n;
    ll m = 0, mi=LONG_MAX;
    ll count[1000002] = {0};

    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        count[x]++;
        m = max(m, x);
        mi = min(mi, x);
    }
    for(int i = m ; i >= mi - 1 ; --i) {
        if(count[i]&1) {
            if(count[i - 1] != 0) {
                count[i - 1]++;
                count[i]--;
            }
        }
    }
    ll area = 0;
    int prev = 0, pno = 0;
    for(int i = m ; i >= 1 ; --i) {
        if(count[i] == 0)
            continue;
        if(!prev && count[i] >= 4) {
            area += (ll)(count[i] / 4) * (ll)i * (ll)i;
            count[i] = count[i] % 4;
            prev = count[i];
            pno = i;
        }
        else if(prev >= 2) {
            if(count[i] >= 2) {
                area += (ll)pno * (ll)i;
                count[i] -= 2;
            }
            area += (ll)(count[i] / 4) * (ll)i * (ll)i;
            count[i] = count[i] % 4;
            prev = count[i];
            pno = i;
        }
        else if(count[i] >= 2){
            count[i] = count[i] % 4;
            prev = count[i];
            pno = i;
        }
    }
    cout << area;
    return 0;
}

