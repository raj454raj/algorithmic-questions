#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x, y;
    string s;
    cin >> s;
    scanf("%d", &n);
    while(n--) {
        scanf("%d%d", &x, &y);
        reverse(s.begin() + x, s.begin() + y + 1);
        cout << s << endl;
    }
    return 0;
}
