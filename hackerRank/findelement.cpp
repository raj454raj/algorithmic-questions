#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x, index;
    int tmp;
    cin >> x;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> tmp;
        if(tmp == x)
            index = i;
    }
    cout << index << endl;
    return 0;
}
