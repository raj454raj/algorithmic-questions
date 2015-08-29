#include<bits/stdc++.h>
using namespace std;
void printDeq(deque<int> d) {
    for(int i = 0 ; i < d.size() ; ++i) {
        cout << d[i] << " ";
    }
    cout << endl;
}
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> res(n - k + 1);
    deque<int> d;
    if(n == 0 || k == 0)
        return res;
    for (int i = 0; i < k; i++) {
        while (!d.empty() && nums[i] >= nums[d.back()])
            d.pop_back();
        d.push_back(i);
    }

    for (int i = k ; i < n ; i++) {
        res[i - k] = nums[d.front()];
        while (!d.empty() && nums[i] >= nums[d.back()])
            d.pop_back();
        while (!d.empty() && d.front() <= i-k)
            d.pop_front();
        d.push_back(i);
    }
    res[n - k] = nums[d.front()];
    return res;
}

int main() {
    int arr[] = {1,3,-1,-3,5,3,6,7};
    vector<int> v;
    //v.assign(arr, arr + sizeof(arr) / sizeof(arr[0]));
    vector<int> res = maxSlidingWindow(v, 0);
    for(int i = 0 ; i < res.size() ; ++i)
        cout << res[i] << " ";
    return 0;
}
