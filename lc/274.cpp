#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int hIndex(vector<int>& citations) {
    sort(citations.begin(), citations.end());
    for(int i = 0 ; i < citations.size() ; ++i) {
        if(citations[i] >= citations.size() - i)
            return citations.size() - i;
    }
    return 0;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> x;
        v.push_back(x);
    }
    cout << hIndex(v);
    return 0;
}

