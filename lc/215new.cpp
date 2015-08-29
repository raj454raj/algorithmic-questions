#include<bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    priority_queue< int, vector<int> > q(nums.begin(), nums.end());
    while(k > 1) {
        q.pop();
        k--;
    }
    return q.top();
}

int main() {
    vector<int> ar;
    ar.push_back(5);
    ar.push_back(3);
    ar.push_back(2);
    ar.push_back(1);
    ar.push_back(6);
    ar.push_back(4);
    cout << findKthLargest(ar, 3);
    return 0;
}
