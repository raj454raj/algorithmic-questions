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

void recurse(int curr, int n, vector<int>& res) {
    if(curr > n)
        return;
    res.push_back(curr);
    recurse(curr*10, n, res);
    if(curr % 10 != 9)
        recurse(curr + 1, n, res);
}

vector<int> lexicalOrder(int n) {
    vector<int> res;
    recurse(1, n, res);
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> res = lexicalOrder(n);
    for(int i = 0 ; i < res.size() ; ++i) {
        cout << res[i] << " ";
    }
    return 0;
}

