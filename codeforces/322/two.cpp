#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n, x;
    ios_base::sync_with_stdio(0);
    cin >> n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        v[i] = x;
    }
    stack<int> s;
    for(int i =  v.size() - 1 ; i >= 0 ; i--) {
        if(!s.empty()) {
            if(v[i] > s.top())
                s.push(v[i]);
        }
        else
            s.push(v[i]);
    }
    for(int i = 0 ; i < v.size() ; ++i) {
        if(s.empty()) {
            break;
        }
        if(v[i] < s.top()) {
            cout << s.top() - v[i] + 1 << " ";
        }
        else if(v[i] == s.top()) {
            cout << 0 << " ";
            s.pop();
        }
    }
    return 0;
}

