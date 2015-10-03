#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n;
    scanf("%d", &n);

    int j;
    for(int i = 0 ; i < n + 1 ; ++i) {
        for(int k = (n - i) * 2 - 1 ; k >= 0 ; k--)
            cout << " ";
        if(i == 0) {
            cout << 0 << endl;
            continue;
        }
        for(j = 0 ; j <= i ; ++j)
            cout << j << " ";
        for(j = i - 1 ; j > 0 ; j--)
            cout << j << " ";
        if(!j)
            cout << 0;
        cout << endl;
    }
    for(int i = n - 1 ; i >= 0 ; i--) {
        for(int k = (n - i) * 2 - 1; k >= 0 ; --k) {
            cout << " ";
        }
        if(i == 0) {
            cout << 0 << endl;
            continue;
        }
        for(j = 0 ; j <= i ; ++j) {
            cout << j << " ";
        }
        for(j = i - 1 ; j > 0 ; --j) {
            cout << j << " ";
        }
        if(!j)
            cout << 0;
        cout << endl;
    }
    return 0;
}

