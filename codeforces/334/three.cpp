#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    ll n;
    vector<int> m;
    vector<int> w;
    vector<int> x;
    x.push_back(500);
    x.push_back(1000);
    x.push_back(1500);
    x.push_back(2000);
    x.push_back(2500);
    int tmp;
    for(int i = 0 ; i < 5 ; ++i) {
        cin >> tmp;
        m.push_back(tmp);
    }
    for(int i = 0 ; i < 5 ; ++i) {
        cin >> tmp;
        w.push_back(tmp);
    }
    int hu, hs;
    cin >> hs >> hu;
    int total = 0;
    for(int i = 0 ; i < 5 ; ++i) {
        tmp = (int)max(0.3 * x[i], (float)(1 - m[i] / 250.0) * x[i]  - 50.0 * w[i]);
        total += tmp;
    }
    total += hs * 100;
    total -= hu * 50;
    cout << total;
    return 0;
}

