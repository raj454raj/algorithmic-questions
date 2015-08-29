#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void sortColors(vector<int>& nums) {
    int low, high, mid, n;
    n = nums.size();
    low = mid = 0;
    high = n - 1;
    while(mid <= high) {
        switch(nums[mid]) {
            case 0: swap(&nums[low], &nums[mid]); mid++; low++; break;
            case 1: mid++; break;
            case 2: swap(&nums[mid], &nums[high]); high--; break;
        }
    }
}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    sortColors(v);
    for(int i = 0 ; i < v.size() ; ++i)
        cout << v[i] << " ";
    return 0;
}
