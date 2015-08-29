#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

void printVector(vector<int>& nums) {
    for(int i = 0 ; i < nums.size() ; ++i) {
        cout << nums[i] << " ";
    } 
    cout << endl;
}
int firstMissingPositive(vector<int>& nums) {
    if(nums.size() == 0)
        return 1;
    int n = -1;
    for(int i = 0 ; i < nums.size() ; ++i) {
        if(nums[i] <= 0) {
            swap(nums[i], nums[++n]);
        }
    }
    int shift = n;
    vector<int> tmp(nums.begin() + shift + 1, nums.end());
    for(int i = 0 ; i < tmp.size() ; ++i) {
        if(abs(tmp[i]) - 1 < tmp.size() && tmp[abs(tmp[i]) - 1] > 0)
            tmp[abs(tmp[i]) - 1] = -tmp[abs(tmp[i]) - 1];
    }
    for(int i = 0 ; i < tmp.size() ; ++i)
        if(tmp[i] > 0)
            return i + 1;
    return tmp.size() + 1;
}

int main() {
    int t, x, n;
    vector<int> v;
    t = readnum();
    while(t--) {
        cin >> n;
        for(int i = 0 ; i < n ; ++i) {
            cin >> x;
            v.push_back(x);
        }
        cout << firstMissingPositive(v) << endl;
        v.clear();
    }
    return 0;
}

