#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

int maxProfit(vector<int>& nums) {
    if(nums.size() == 0)
        return 0;
    int m = nums[0], cm = nums[0];
    for(int i = 1 ; i < nums.size() ; ++i) {
        m = max(m, nums[i]);
        cm = max(m, cm);
    }
    return m;
}
int main() {
    int t, x, n;
    t = readnum();
    vector<int> v;

    while(t--) {
        cin >> n;
        for(int i = 0 ; i < n ; ++i) {
            cin >> x;
            v.push_back(x);
        }
        cout << maxProfit(v) << endl;
        v.clear();
    }
    return 0;
}

