#include<bits/stdc++.h>
using namespace std;
vector<string> summaryRanges(vector<int>& nums) {
    vector<string> res;
    if(nums.size() == 0) {
        return res;
    }
    int start = nums[0], prev = nums[0];
    string s = "";
    ostringstream conv;
    for(int i = 1 ; i < nums.size() ; i++) {
        if(nums[i] == start + 1) {
            start++;
        }
        else {
            s = "";
            if(start == prev) {
                conv << prev;
                s += conv.str();
            }
            else {
                conv << prev;
                s += conv.str();
                s += "->";
                conv.str(string());
                conv << start;
                s += conv.str();
            }
            conv.str(string());
            start = prev = nums[i];
            res.push_back(s);
        }
    }
    s = "";
    if(start == prev) {
        conv << prev;
        s += conv.str();
    }
    else {
        conv << prev;
        s += conv.str();
        s += "->";
        conv.str(string());
        conv << start;
        s += conv.str();
    }
    res.push_back(s);
    return res;
}

int main() {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    vector<string> s = summaryRanges(v);
    for(vector<string>::iterator it = s.begin() ; it != s.end() ; it++) {
        cout << *it << endl;
    }
    return 0;
}
