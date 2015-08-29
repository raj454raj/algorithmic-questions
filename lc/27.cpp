#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>& v, int k) {
    for(int i = 0 ; i < k ; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int removeElement(vector<int>& nums, int val) {
    int k = 0;
    int sz = nums.size();
    for(int i = 0 ; i < sz ; i++) {
        while(nums[i] == val)
            i++;
        if(i < sz)
            nums[k++] = nums[i];
    }
    printVector(nums, k);
    return k;
}

int main() {
    int n;
    vector<int> v;
    v.push_back(5);     
    v.push_back(5);     
    v.push_back(5);     
    cout << removeElement(v, 5);
    return 0;
}
