#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int n, count, x;
    scanf("%d", &t);
    while(t--) {
        int arr[10] = {0};
        scanf("%d", &n);
        count = 0;
        for(int i = 0 ; i < n ; i++) {
            scanf("%d", &x);
            if(arr[x%10] != 0)
                count++;
            arr[x%10] = 1;
        }
        cout << count << endl;
    }
    return 0;
}
