#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& nums) {
    for(vector<int>::iterator it = nums.begin() ; it != nums.end() - 1 ; it++) {
        if(*it > *(it + 1)) {
            return *(it + 1);
        }
    }
    return *nums.begin();
}

int main() {
    vector<int> v;
    v.push_back(8);
    v.push_back(9);
    v.push_back(15);
    v.push_back(25);
    v.push_back(35);
    v.push_back(7);
    cout<<findMin(v);
    return 0;
}
