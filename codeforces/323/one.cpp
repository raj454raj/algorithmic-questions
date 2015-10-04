#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n, x, y;
    scanf("%d", &n);
    int a[10000] = {0};
    int b[10000] = {0};
    vector<int> v;
    for(int i = 1 ; i <=  n * n ; ++i) {
        cin >> x >> y;
        if(a[x] == 0 && b[y] == 0) {
            v.push_back(i);
            a[x] = 1;
            b[y] = 1;
        }
    }
    for(int i = 0 ; i < v.size() ; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}

