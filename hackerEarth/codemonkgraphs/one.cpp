#include<bits/stdc++.h>
using namespace std;
int main() {
    set<int> s;
    int t, e, x, y;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &e);
        while(e--) {
            scanf("%d%d", &x, &y);
            s.insert(x);
            s.insert(y);
        }
        cout << s.size() << endl;
        s.clear();
    }
    return 0;
}
