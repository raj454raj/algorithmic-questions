#include<bits/stdc++.h>
#define ll long long int
//#define g getchar_unlocked
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, x, y;
    cin >> n;
    int a = 0, b = 0;
    for(int i = 0 ; i < n ; ++i) {
        cin >> x >> y;
        if(x > y)
            a++;
        else if(x < y)
            b++;
    }
    if(a > b) {
        cout << "Mishka";
    }
    else if(a < b) {
        cout << "Chris";
    }
    else {
        cout << "Friendship is magic!^^";
    }
    return 0;
}

