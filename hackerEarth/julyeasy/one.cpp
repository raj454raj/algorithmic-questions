#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    vector<int> odd;
    vector<int> even;
    int oddsum = 0;
    int evensum = 0;
    for(int i = 0 ; i < n ; i++) {
        cin >> x;
        if(x&1) {
            oddsum += x;
            odd.push_back(x);
        }
        else {
            evensum += x;
            even.push_back(x);
        }
    }
    sort(even.begin(), even.end());
    for(int i = 0 ; i < even.size() ; i++) {
        cout << even[i] << " ";
    }
    cout << evensum << " ";
    sort(odd.begin(), odd.end());
    for(int i = 0 ; i < odd.size() ; i++) {
        cout << odd[i] << " ";
    }
    cout << oddsum;

    return 0;
}
