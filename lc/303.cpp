#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class NumArray {
    vector<long long> sum;
    public:
    NumArray(vector<int> &nums) {
        sum.resize(nums.size());
        long long int s = 0;
        for(int i = 0 ; i < nums.size() ; ++i) {
            s += nums[i];
            sum[i] = s;
        }
    }
    int sumRange(int i, int j) {
        if(i == 0)
            return sum[j];
        return sum[j] - sum[i - 1];
    }

};
int main() {
    ios_base::sync_with_stdio(0);
    vector<int> v;
    v.push_back(-2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(-5);
    v.push_back(2);
    v.push_back(-1);
    NumArray numArray(v);
    cout << numArray.sumRange(0, 2) << endl;
    cout << numArray.sumRange(2, 5) << endl;
    cout << numArray.sumRange(0, 5) << endl;
    return 0;
}

