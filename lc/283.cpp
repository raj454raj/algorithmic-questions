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

int getnext(vector<int>& nums, int start) {
    int i = nums.size();
    for(i = start + 1 ; i < nums.size() ; ++i) {
        if(nums[i] != 0)
            break;
    }
    return i;
}

void moveZeroes(vector<int>& nums) {
    if(nums.size() <= 1)
        return;
    int start = 0, end = 1, t;
    while(1) {
        if(nums[start] == 0) {
            end = getnext(nums, start);
            t = nums[start];
            if(end == nums.size())
                break;
            nums[start] = nums[end];
            nums[end] = t;
            start++;
        }
        else
            start++;
        if(end == nums.size() - 1 || start == nums.size() - 1)
            break;
    }
}

int main() {
    int n, x;
    n = readnum();
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++) {
        x = readnum();
        v[i] = x;
    }
    moveZeroes(v);
    for(int i = 0 ; i < n ; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
