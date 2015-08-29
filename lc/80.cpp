#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 0)
        return 0;
    int prev = nums[0];
    int count = 1;
    int arr[100000][2];
    int z = 0;
    for(int i = 1 ; i < nums.size() ; i++) {
        if(prev == nums[i]) {
            count++;
        }
        else {
            arr[z][0] = prev;
            arr[z][1] = count;
            z++;
            prev = nums[i];
            count = 1;
        }
    }
    arr[z][0] = prev;
    arr[z][1] = count;
    z++;
    int k = 0;
    for(int i = 0 ; i < z ; i++) {
        if(arr[i][1] > 2)
            arr[i][1] = 2;
        for(int j = 0 ; j < arr[i][1] ; j++) {
            nums[k++] = arr[i][0];
        }
    }
    return k;
}
int main() {
    vector<int> v;
    int res = removeDuplicates(v);
    cout << res << endl;
    return 0;
}
