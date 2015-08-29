#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int sz = nums.size();
    vector<int> res(sz);
    res[0] = 1;
    int pro;
    for(int i = 1 ; i < nums.size() ; ++i) {
        res[i] = res[i - 1] * nums[i - 1];
    }
    pro = nums[sz - 1];
    for(int i = 2 ; i <= sz ; ++i) {
        res[sz - i] *= pro;
        pro *= nums[sz - i];
    }
    return res;
}

int main() {
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v = productExceptSelf(v);
    for(int i = 0 ; i < v.size() ; ++i)
        cout << v[i] << " ";
    return 0;
}
