#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int k = 0;
    if(nums.size() == 0)
        return 0;
    int prev = nums[0];
    for(int i = 0 ; i < nums.size() ; i++) {
        if(nums[i] != prev) {
            nums[++k] = nums[i];
            prev = nums[i];
        }
    }
    return k + 1;
}

int main() {
    vector<int> v;
    cout << removeDuplicates(v);
    return 0;
}
