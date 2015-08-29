#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first < b.first;
}
vector<int> twoSum(vector<int>& nums, int target) {
    int i;
    vector< pair<int, int> > v;
    for(i = 0 ; i < nums.size() ; i++) {
        v.push_back(make_pair(nums[i], i + 1));
    }
    sort(v.begin(), v.end(), comp);
    int left = 0, right = nums.size() - 1;
    while(1) {
        if(v[left].first + v[right].first == target) {
            break;
        }
        else if(v[left].first + v[right].first < target) {
            left++;
        }
        else
            right--;
    }
    vector<int> s;
    s.push_back(v[left].second);
    s.push_back(v[right].second);
    sort(s.begin(), s.end());
    return s;
}

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(15);
    v.push_back(11);
    v.push_back(8);
    v.push_back(1);
    vector<int> r = twoSum(v, 9);
    for(int i = 0 ; i < r.size() ; i++)
        cout << r[i] << " ";
    return 0;
}
