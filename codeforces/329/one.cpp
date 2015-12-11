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
    ll n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> v[i];
    }
    int count = 0, flag;
    for(int i = 0 ; i < 26 ; ++i) {
        for(int j = i + 1 ; j < 26 ; ++j) {
            int curr = 0;
            for(int k = 0 ; k < n ; ++k) {
                flag = 0;
                for(int l = 0 ; l < v[k].size() ; ++l) {
                    if(v[k][l] == (char)(i + 'a') || v[k][l] == (char)(j + 'a'))
                        continue;
                    else {
                        flag = 1;
                        break;
                    }
                }
                if(!flag)
                    curr += v[k].size();
            }
            if(curr > count)
                count = curr;
        }
    }
    cout << count;
    return 0;
}

