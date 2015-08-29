#include<bits/stdc++.h>
using namespace std;
int main() {
    int j, x, i, t, n, max, count, prev;
    vector<int>::iterator it1, it2;
    vector<int> v1, v2;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        v1.clear();
        v2.clear();
        for(i = 0 ; i < n ; i++) {
            scanf("%d", &x);
            v1.push_back(x);
        }
        sort(v1.begin(), v1.end());
        for(i = 0 ; i < n ; i++) {
            scanf("%d", &x);
            v2.push_back(x);
        }
        sort(v2.begin(), v2.end());
        max = 0;
        prev = 0;
        count = 0;
        it1 = v1.end() - 1;
        it2 = v2.end() - 1;
        for(i = 0 ; i < n && it1 != v1.begin() - 1 && it2 != v2.begin() - 1; i++) {
            if(*it1 > *it2) {
                count++;
                it1--;
                it2--;
            }
            else {
                it2--;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
