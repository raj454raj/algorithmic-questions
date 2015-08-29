#include<bits/stdc++.h>
#define eps 0.000001
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double root1, root2;
    root1 = (((-1) * b - sqrt(b * b - 4 * a * c))) / (2 * a) * (1.0);
    root2 = (((-1) * b + sqrt(b * b - 4 * a * c))) / (2 * a) * (1.0);
    if(abs(root1 - root2) < eps) {
        cout << root1;
    }
    else
        cout << root1 << " " << root2;
    return 0;
}
