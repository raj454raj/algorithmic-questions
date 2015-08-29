#include<bits/stdc++.h>
using namespace std;
int bsearch(vector<int> a, int x) {
    int beg = 0, mid, last = a.size() - 1;
    while(beg <= last) {
        mid = last + (beg - last) / 2;
        if(a[mid] == x) 
            return mid;
        else if(a[mid] > x)
            last = mid - 1;
        else
            beg = mid + 1;
    }
    return -1;
}
int main() {
    vector<int> arr;
    int x, n, q;
    cin >> n >> q;
    while(n--) {
        cin >> x;
        arr.push_back(x);
    }
    int sz, flag;
    sort(arr.begin(), arr.end());

    sz = arr.size();
    while(q--) {
        cin >> x;
        flag = bsearch(arr, x);
        if(flag != -1) {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}

