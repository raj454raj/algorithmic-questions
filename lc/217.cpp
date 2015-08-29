#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int curr, flag = 0;
    for(vector<int>::iterator it = nums.begin() ; it != nums.end() ; it++) {
        if(!flag) {
            flag = 1;
            curr = *it;
            continue;
        }
        if(*it == curr) {
            return true;
        }
        else {
            curr = *it;
        }
    }
    return false;
}

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(3);
    v.push_back(4);
    v.push_back(8);
    v.push_back(0);
    v.push_back(9);
    v.push_back(1);
    v.push_back(6);
    v.push_back(5);
    cout << containsDuplicate(v);
    return 0;
}
