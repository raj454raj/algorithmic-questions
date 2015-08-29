#include<bits/stdc++.h>
using namespace std;
int rob(vector<int>& nums) {
    int a = 0, b = 0;
    for(int i = 0 ; i < nums.size() ; ++i) {
        if(i&1)
            a = max(a + nums[i], b);
        else
            b = max(b + nums[i], a);
    }
    return max(a, b);
}
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(1);
    v.push_back(3);
    v.push_back(100);
    cout << rob(v) << endl;
    return 0;
}
