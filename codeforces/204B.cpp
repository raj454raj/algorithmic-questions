#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n, x, y;
    map<int, int> f, b;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; ++i) {
        scanf("%d%d", &x, &y);

        f[x] ? f[x]++ : f[x] = 1;
        if(y != x)
            b[y] ? b[y]++ : b[y] = 1;
    }

    int min = INT_MAX, req;
    int half = n / 2;
    if(n&1)
        half = n / 2 + 1;
    for(map<int, int>::iterator it = f.begin() ; it != f.end() ; ++it) {
        if(it->second >= half) {
            min = 0;
            break;
        }
        if(b[it->first]) {
            req = half - it->second;
            if(it->second + b[it->first] >= half) {
                if(req < min)
                    min = req;
            }
        }
    }
    if(min == INT_MAX) {
        for(map<int, int>::iterator it = b.begin() ; it != b.end() ; ++it) {
            if(it->second >= half) {
                min = half;
                break;
            }
        }
        if(min == INT_MAX)
            printf("-1");
        else
            printf("%d", min);
    }
    else
        printf("%d", min);
    return 0;
}
