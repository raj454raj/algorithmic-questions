#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> triplet(3);
    vector<vector<int> > res;
    int n = nums.size();
    for (int i = 0;i < n; i++) {
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum_two = nums[i] + nums[j];
            if (sum_two + nums[k] < 0) {
                j++;
            } else if (sum_two + nums[k] > 0) {
                k--;
            } else {
                triplet[0] = nums[i];
                triplet[1] = nums[j];
                triplet[2] = nums[k];
                res.push_back(triplet);
                j++;
                k--;
            }
        }
    }
    return res;
}

int main() {
    static const int arr[] = {7,-1,14,-12,-8,7,2,-15,8,8,-8,-14,-4,-5,7,9,11,-4,-15,-6,1,-14,4,3,10,-5,2,1,6,11,2,-2,-5,-7,-6,2,-15,11,-6,8,-4,2,1,-1,4,-6,-15,1,5,-15,10,14,9,-8,-6,4,-6,11,12,-15,7,-1,-9,9,-1,0,-4,-1,-12,-2,14,-9,7,0,-3,-4,1,-2,12,14,-10,0,5,14,-1,14,3,8,10,-8,8,-5,-2,6,-11,12,13,-7,-12,8,6,-13,14,-2,-5,-11,1,3,-6};
    vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));
    vector<vector<int> > res = threeSum(v);
    for(int i = 0 ; i < res.size() ; i++) {
        for(int j = 0 ; j < res[i].size() ; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}
