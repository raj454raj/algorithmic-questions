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

int missingNumber(vector<int>& nums) {
    if(nums.size() == 0)
        return 1;
    int sum1 = 0, sum2 = 0;
    for(int i = 0 ; i < nums.size() ; ++i) {
        sum1 ^= nums[i];
        sum2 ^= i;
    }
    sum2 ^= nums.size();
    int tmp = sum1^sum2;
    return tmp;
}
int main() {
    int t, x, n;
    vector<int> v;
    t = readnum();
    while(t--) {
        n = readnum();
        for(int i = 0 ; i < n ; ++i) {
            x = readnum();
            v.push_back(x);
        }
        cout << missingNumber(v) << endl;
        v.clear();
    }
    return 0;
}

