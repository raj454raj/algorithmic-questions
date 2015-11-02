#include<bits/stdc++.h>
#define ll long long int
using namespace std;
string tostring(ll n) {
    ostringstream os;
    os << n;
    return os.str();
}
int main() {
    ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    ll tmpsum = 0;
    int count = 0;
    while(1) {
        if(s.size() == 1) {
            break;
        }
        for(int i = 0 ; i < s.size() ; ++i) {
            tmpsum += (ll)(s[i] - '0');
        }
        s = tostring(tmpsum);
        count++;
        if(s.size() == 1) {
            break;
        }
        tmpsum = 0;
    }
    cout << count;
    return 0;
}

