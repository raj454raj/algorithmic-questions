#include<bits/stdc++.h>
using namespace std;
void printDeq(deque<int> d) {
    for(int i = 0 ; i < d.size() ; ++i) {
        cout << d[i] << " ";
    }
    cout << endl;
}
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> res;
    deque<int> d;
    deque<int>::iterator it;
    if(nums.size() == 0)
        return res;
    int max = nums[0];
    for(int i = 0 ; i < k ; i++) {
        d.push_back(nums[i]);
        if(nums[i] > max)
            max = nums[i];
    }
    int fr;
    for(int i = 1 ; i < nums.size() - k + 1 ; ++i) {
        fr = d.front();
        printDeq(d);
        res.push_back(max);
        d.pop_front();
        if(fr == max) {
            if(!d.empty())
                max = *max_element(d.begin(), d.end());
            else
                max = nums[i + k - 1];
        }
        d.push_back(nums[i + k - 1]);
        if(nums[i + k - 1] > max) {
            max = nums[i + k - 1];
        }
    }
    max = *max_element(d.begin(), d.end());
    res.push_back(max);
    return res;
}

int main() {
    int arr[] = {105, 420, 728, 728, 912, 752, 752, 752, 752, 752, 752, 752, 587, 587, 130};
    vector<int> v;
    v.assign(arr, arr + sizeof(arr) / sizeof(arr[0]));
    vector<int> res = maxSlidingWindow(v, 1);
    for(int i = 0 ; i < res.size() ; ++i)
        cout << res[i] << " ";
    return 0;
}
