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

int find(vector<int>& v, int x, int flag) {
    int mid, beg = 0, end = v.size() - 1;
    int prev = -1;
    while(beg <= end) {
        mid = end + (beg - end) / 2;
        if(v[mid] < x)
            beg = mid + 1;
        else if(v[mid] > x)
            end = mid - 1;
        else {
            prev = mid;
            if(flag == 1)
                end = mid - 1;
            else
                beg = mid + 1;
        }
    }
    return prev;
}

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> res;
    res.push_back(find(nums, target, 1));
    res.push_back(find(nums, target, 2));
    return res;
}
int main() {
    int t, n, x, target;
    vector<int> v, tmp;
    t = readnum();
    while(t--) {
        cin >> n;
        for(int i = 0 ; i < n ; ++i) {
            cin >> x;
            v.push_back(x);
        }
        cin >> target;
        tmp = searchRange(v, target);
        cout << tmp[0] << ", " << tmp[1] << endl;
        v.clear();
    }
    return 0;
}

