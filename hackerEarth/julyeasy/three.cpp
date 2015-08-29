#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, count, x;
    int arr[1005];
    cin >> t;
    while(t--) {
        cin >> n;
        count = 0;
        for(int i = 0 ; i < n ; i++)
            cin >> arr[i];
        for(int i = 0 ; i < n - 1 ; i++) {
            for(int j = i + 1 ; j < n ; j++) {
                if(arr[i] == arr[j])
                    continue;
                else {
                    if((arr[i] + arr[j])%2 == 0) {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
