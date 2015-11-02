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
    ll n, x;
    string s;
    vector<pair<int, int> > a, b;
    for(int i = 0 ; i < 8 ; ++i) {
        cin >> s;
        for(int j = 0 ; j < s.size() ; ++j) {
            if(s[j] == 'B')
                b.push_back(make_pair(i, j));
            else if(s[j] == 'W')
                a.push_back(make_pair(i, j));
        }
    }
    int amin = INT_MAX, bmin = INT_MAX, flag;
    for(int i = 0 ; i < a.size() ; ++i) {
        flag = 0;
        for(int j = 0 ; j < b.size() ; ++j) {
            if(a[i].second == b[j].second) {
                flag = 1;
                break;
            }
        }
        if(!flag) {
            if(amin > a[i].first)
                amin = a[i].first;
        }
    }
    for(int i = 0 ; i < b.size() ; ++i) {
        flag = 0;
        for(int j = 0 ; j < a.size() ; ++j) {
            if(a[j].second == b[i].second) {
                flag = 1;
                break;
            }
        }
        if(!flag) {
            if(bmin > 7 - b[i].first)
                bmin = 7 - b[i].first;
        }
    }
    cout << amin << " " << bmin;
    if(amin < bmin)
        cout << "A";
    else
        cout << "B";

    return 0;
}
