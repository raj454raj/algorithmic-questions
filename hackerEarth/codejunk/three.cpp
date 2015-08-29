#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    scanf("%d", &n);
    vector<int> v;
    for(int i = 0 ; i < n ; ++i) {
        scanf("%d", &x);
        v.push_back(x);
    }
    int max = 0, tmp, sum = 0;
    vector<int>::iterator it, t;
    while(n >= 3) {
        max = 0;
        for(it = v.begin() + 1 ; it != v.end() - 1 ; ++it) {
            tmp = (*(it + 1)) * (*(it - 1));
            if(tmp > max) {
                max = tmp;  
                t = it;
            }
        }
        sum += max;
        v.erase(t);
        n--;
    }
    cout << sum;
    return 0;
}
