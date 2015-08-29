#include<bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    make_heap(nums.begin(), nums.end());
    while(k > 1) {
        pop_heap(nums.begin(), nums.end());
        nums.pop_back();
        k--;
    }
    return nums[0];
}

int main() {
    vector<int> ar;
    ar.push_back(5);
    ar.push_back(3);
    ar.push_back(2);
    ar.push_back(1);
    ar.push_back(6);
    ar.push_back(4);
    cout << findKthLargest(ar, 6);
    return 0;
}
