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
    int x;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        v[i] = x;
    }
    int count, changed, it = 0;
    while(1) {

        changed = 0;
        vector<int> tmp;
        for(int i = 1; i < n - 1 ; ++i) {
            count = 0;
            if(v[i - 1])
                count++;
            if(v[i])
                count++;
            if(v[i + 1])
                count++;
            if(count > 1) {
                if(v[i] == 0) {
                    changed = 1;
                    tmp.push_back(i);
                }
            }
            else {
                if(v[i] == 1) {
                    changed = 1;
                    tmp.push_back(i);
                }
            }
        }
        for(int i = 0 ; i < tmp.size() ; ++i) {
            v[tmp[i]] = 1 - v[tmp[i]];
        }
        if(changed == 0) {
            break;
        }
        it++;
        if(it > n - 2) {
            cout << -1 << endl;
            return 0;
        }

    }
    cout << it << endl;
    for(int i = 0 ; i < n ; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}

