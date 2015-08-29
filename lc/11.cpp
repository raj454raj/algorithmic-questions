#include<bits/stdc++.h>
using namespace std;
int min(int a, int b) {
    if(a > b)
        return b;
    return a;
}

int maxArea(vector<int>& height) {
    int area, max = 0;
    for(int i = 1 ; i < height.size() ; i++) {
        area = min(height[i], height[i - 1]);
        if(area > max) {
            max = area;
        }
    }
    return max;
}
int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    cout << maxArea(v);
    return 0;
}
