#include<bits/stdc++.h>
#define g getchar_unlocked
using namespace std;

long long int readnum() {
    long long int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10*n + c - '0', c = g();
    return n;
}

int main() {
    long long int i, t, n, k, x, count, breads;
    vector<long long int> v;
    t = readnum();
    while(t--) {
        n = readnum();
        k = readnum();

        for(i = 0 ; i < n ; i++) {
            x = readnum();
            v.push_back(x);
        }
        breads = k;
        count = 1;
        for(i = 0 ; i < n ; i++) {
            if(breads == 0) {
                breads = k;
                count++;
            }
            if(breads >= v[i]) {
                breads -= v[i];
            }
            else {
                v[i] -= breads;
                if(v[i] % k == 0) {
                    count += v[i] / k;
                    breads = 0;
                }
                else {
                    count += v[i] / k + 1;
                    breads = k - v[i]%k;
                }
            }
            if(breads > 0)
                breads -= 1;
        }
        printf("%lld\n", count);
        v.clear(); 
    }
    return 0;
}
