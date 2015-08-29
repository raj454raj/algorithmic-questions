#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, n, l, r, x, s;
    cin >> n >> l >> r >> x;
    vector<int> v;
    for(i = 0 ; i < n ; ++i) {
        cin >> s;
        v.push_back(s);
    }
    int t = 1 << n;
    int maincount = 0, min, max, sum, count;

    for(i = 0 ; i < t ; ++i) {
        min = INT_MAX; max = 0;
        sum = 0; count = 0;
        for(j = 0 ; j < n ; ++j) {
            if(i & (1 << j)) {
                sum += v[j];
                count++;
                if(v[j] < min)
                    min = v[j];
                if(v[j] > max)
                    max = v[j];
            }
        }
        if(sum >=l && sum <= r && max - min >= x)
            maincount++;
    }
    cout << maincount << endl;
    return 0;
}
