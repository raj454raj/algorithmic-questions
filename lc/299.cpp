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
string toString(int val) {
    ostringstream ss;
    ss << val;
    return ss.str();
}

string getHint(string secret, string guess) {
    int A = 0, B = 0;
    vector< list<int> > v(10);
    int n = secret.size();
    for(int i = 0 ; i < n ; ++i) {
        if(secret[i] == guess[i]) {
            A++;
        }
        else {
            v[guess[i] - '0'].push_back(i);
        }
    }
    for(int i = 0 ; i < n ; ++i) {
        if(secret[i] != guess[i]) {
            if(v[secret[i] - '0'].size() == 0)
                continue;
            B++;
            v[secret[i] - '0'].pop_front();
        }
    }
    string fin = toString(A) + "A" + toString(B) + "B";
    return fin;
}

int main() {
    ios_base::sync_with_stdio(0);
    string a, b;
    cin >> a >> b;
    cout << getHint(a, b);
    return 0;
}
