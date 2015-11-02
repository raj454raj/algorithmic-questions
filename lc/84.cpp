#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int largestRectangleArea(vector<int>& height) {
    stack<int> s;
    long long int i = 0;
    long long int top, m = 0, curr = 0;
    while(i < height.size()) {
        if(s.empty() || (long long int)height[s.top()] <= (long long int)height[i])
            s.push(i++);
        else {
            top = s.top();
            s.pop();
            if(s.empty()) {
                curr = (long long int)height[top] * (long long int)i;
            }
            else {
                curr = (long long int)height[top] * (long long int)(i - s.top() - 1);
            }
            if((long long int)curr > (long long int)m)
                m = curr;
        }
    }
    while(!s.empty()) {
        top = s.top();
        s.pop();
        if(s.empty()) {
            curr = (long long int)height[top] * (long long int)i;
        }
        else {
            curr = (long long int)height[top] * (long long int)(i - s.top() - 1);
        }
        if((long long int)curr > (long long int)m)
            m = curr;
    }
    return m;
}
int main() {
    int n;
    scanf("%d", &n);
    vector<int> v;
    v.push_back(0);
    v.push_back(0);
    v.push_back(2147483647);
    cout << largestRectangleArea(v);
    return 0;
}

