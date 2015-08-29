#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, r;
    scanf("%d%d", &n, &r);
    vector<int> v;
    for(int i = 0 ; i < n ; ++i) {
        v.push_back(i + 1);
    }

    vector<int>::iterator it;
    /*for(it = v.begin() ; it != v.end() ; ++it) {
        cout << *it;    
    }*/
    it = v.begin();
    int index = 0;
    while(v.size() != 1) {
        index = (index + r - 1) % v.size();
        it = v.begin() + index;
        v.erase(it);
    }
    cout << *v.begin();
    return 0;
}
