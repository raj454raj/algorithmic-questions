#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> v;
    int count = 0;
    for(int i = s.size() - 1 ; i >= 0 ; i--) {
        if((int)(s[i] - '0')&1)
            ;
        else
            count++;
        v.push_back(count);
    }
    for(int i = v.size() - 1 ; i >= 0 ; i--) {
        printf("%d ", v[i]);
    }
    return 0;
}
