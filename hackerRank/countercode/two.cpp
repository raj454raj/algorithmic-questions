#include<bits/stdc++.h>
using namespace std;
int main() {
    int start, end, count, t, n, flag, x;
    int a[100004];
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        start = 1; end = n;
        count = 0;
        for(int i = n - 1 ; i >= 0 ; i--) {
            if(count&1)
                a[i] = start++;
            else
                a[i] = end--;
            count++;
        }
        for(int i = 0 ; i < n ; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
