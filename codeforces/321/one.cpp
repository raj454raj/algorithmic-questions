#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int cnt;
int mx;
int main() {
    int n, x;
    scanf("%d", &n);
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i) {
        scanf("%d", &x);
        v[i] = x;
    }
    int prev = v[0];
    int m = 0;
    for(int i = 0 ; i < n ; ++i) {
        if(v[i] >= m) {
            cnt++;
            prev = v[i];
        }
        else {
            if(cnt > mx)
                mx = cnt;
            cnt = 1;
            prev = v[i];
        }
        m = v[i];
    }
    if(cnt > mx)
        mx = cnt;
    printf("%d", mx);
    return 0;
}

