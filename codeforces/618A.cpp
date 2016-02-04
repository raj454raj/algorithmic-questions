#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin >> n;
    int i = 1;
    vector<int> v;
    while(n) {
        if(n&1)
            v.push_back(i);
        ++i;
        n >>= 1;
    }
    for(int i = v.size() - 1 ; i >= 0 ; --i) {
        cout << v[i] << " ";
    }
    return 0;
}

