#include<bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fastIO();
    int t, x, y;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        if(x == y || x == y + 2) {
            if(x&1)
                cout << x + y - 1 << endl;
            else
                cout << x + y << endl;
        }
        else
            cout << "No Number\n";
    }
    return 0;
}
