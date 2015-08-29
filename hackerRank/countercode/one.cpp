#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, x, start;
    vector<int> v;
    scanf("%d%d", &n, &k);
    for(int i = 0 ; i < k ; i++) {
        scanf("%d", &x);
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int count = 0;

    start = -1;
    for(int i = 0 ; i < v.size() ; i++) {
        if(start == -1)
            start = v[i];
        if((v[i] - start) / 2 - 1 > 0)
            count += (v[i] - start) / 2 - 1;
        start = v[i];
    }
    if((v[0] - 1) / 2 > 0)
        count += (v[0] - 1) / 2;
    if((n - v[v.size()-1]) / 2 > 0)
        count += (n - v[v.size()-1]) / 2;
    cout << count + k << endl;
    return 0;
}
