#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, x, y, count;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        count = 0;
        int a[1000002] = {0};
        for(int i = 0 ; i < n ; i++) {
            scanf("%d%d", &x, &y);
            a[x]++;
            if(a[y] == 0) {
                count++;
            }
            else
                a[y]--;
        }
        cout << count << endl;
    }
    return 0;
}
