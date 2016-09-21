#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, x, y;
    cin >> n;
    char c;
    int ar[5001], br[5001];
    char ch[5001];
    for(int i = 0 ; i < n ; ++i) {
        cin >> ch[i] >> ar[i] >> br[i];
    }
    int b = 0, g = 0, m = 0;
    for(int i = 1 ; i <= 366 ; ++i) {
        b = 0; g = 0;
        for(int j = 0 ; j < n ; ++j) {
            if(ar[j] <= i && i <= br[j]) {
                if(ch[j] == 'M') {
                    b++;
                }
                else {
                    g++;
                }
            }
        }
        m = max(m, min(b, g));
    }
    cout << m * 2;
    return 0;
}

