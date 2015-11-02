#include<bits/stdc++.h>
//#define g getchar_unlocked
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    vector<int> v(26, 0);
    string s;
    cin >> s;
    for(int i = 0 ; i < s.size() ; ++i) {
        v[s[i] - 'A']++;
    }
    sort(v.begin(), v.end(), greater<int>());
    ll count = 0;
    for(int i = 0 ; i < 26 ; ++i) {
        if(v[i] == 0)
            continue;
        if(k > 0) {
            k -= v[i];
            if(k >= 0) {
                count += (ll)v[i] * (ll)v[i];
            }
            else {
                k += v[i];
                count += (ll)k * (ll)k;
                k -= v[i];
            }
        }
        else
            break;
    }
    cout << count;
    return 0;
}

