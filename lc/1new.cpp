#include<bits/stdc++.h>
#define ll long long int
//#define g getchar_unlocked
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
    }*/

bool less_than(const pair<int, int> &a, const pair<int, int> &b) {
    return a.first < b.first;
}
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    vector< pair<int, int> > v;
    for(int i = 0 ; i < nums.size() ; ++i) {
        v.push_back(make_pair(nums[i], i));
    }
    sort(v.begin(), v.end(), less_than);
    vector< pair<int, int> >::iterator tmp, it;
    for(it = v.begin() ; it != v.end() ; ++it) {
        tmp = lower_bound(it + 1, v.end(), make_pair(target - it->first, 0), less_than);
        if(tmp->first != target - it->first)
            continue;
        if(tmp != v.end()) {
            res.push_back(it -> second);
            res.push_back(tmp -> second);
            sort(res.begin(), res.end());
            break;
        }
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    vector<int>  v;
    /*
    v.push_back(150);
    v.push_back(24);
    v.push_back(79);
    v.push_back(50);
    v.push_back(88);
    v.push_back(345);
    v.push_back(3);*/
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    vector<int> res = twoSum(v, 6);
    for(int i = 0 ; i < res.size() ; ++i) {
        cout << res[i] << " ";
    }
    return 0;
}

