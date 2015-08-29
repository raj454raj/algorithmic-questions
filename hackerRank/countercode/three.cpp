#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, m, index, flag, f, r;
    scanf("%d", &t);
    int a[50003];
    while(t--) {
        scanf("%d%d", &n, &m);
        memset(a, n, 0);
        f = 0; r = n - 1;
        flag = 1;
        while(m--) {
            if(!m)
                break;
            if(flag == 1) {
                a[f]++; f++; flag = 2;
            }
            else {
                a[r]++; r--; flag = 1;
            }
            if(f == r) {
                f = 0;
                r = n - 1;
            }
        }
        if(flag == 1)
            index = f + 1;
        else
            index = r + 1;
        cout << index << " " << a[index - 1] << endl;
    }
    return 0;
}
