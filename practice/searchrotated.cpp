#include<bits/stdc++.h>
using namespace std;

int findRotated(vector<int>& A, int val) {
    int beg = 0;
    int mid;
    int last = A.size()-1;
    while(beg <= last) {
        mid = last + (beg - last) / 2;
        if(A[mid] == val)
            return mid;
        else if(A[mid] <= A[last]) {
            if(val > A[mid] && val <= A[last])
                beg = mid + 1;
            else
                last = mid - 1;
        }
        else if(A[beg] <= A[mid]){
            if(val >= A[beg] && val < A[mid])
                last = mid - 1;
            else
                beg = mid + 1;
        }
    }
    return -1;
}
int main() {
    int n;
    vector<int> v;
    v.push_back(12);
    v.push_back(14);
    v.push_back(18);
    v.push_back(21);
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    cout << findRotated(v, 9);
    return 0;
}
