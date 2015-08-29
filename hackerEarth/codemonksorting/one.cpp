#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b) {
    return a > b;
}
int main() {
    int t, n, x;
    vector<int> v;
    scanf("%d", &t);
    while(t--) {
        v.clear();
        scanf("%d", &n);
        for(int i = 0 ; i < n ; i++) {
            scanf("%d", &x);
            v.push_back(x);
        }
        sort(v.begin(), v.end(), compare);
        for(int i = 0 ; i < n ; i++) 
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}
