#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, N, num, start;
    cin >> n;
    vector<int> v;
    int sum = 0;
    while(n) {
        N = n;
        num = 0;
        start = 1;
        while(N) {
            if(N%10)
                num += start;
            start *= 10;
            N /= 10;
        }
        v.push_back(num);
        n -= num;
    }
    cout << v.size() << endl;
    for(int i = 0 ; i < v.size() ; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
