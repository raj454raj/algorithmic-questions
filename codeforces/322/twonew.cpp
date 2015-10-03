#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n, x;
    ios_base::sync_with_stdio(0);
    cin >> n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        v[i] = x;
    }
    int max = -1, tmp;
    vector<int> m(n);
    for(int i = v.size() - 1 ; i >= 0 ; --i) {
        tmp = max;
        if(v[i] > max) {
            tmp = -1;
            max = v[i];
        }
        m[i] = tmp;
    }
    for(int i = 0 ; i < v.size() ; ++i) {
        if(m[i] == -1)
            cout << "0 ";
        else
            cout << m[i] - v[i] + 1 << " ";
    }
    return 0;
}

