#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& num) {
    int n = num.size();
    int i = n - 2;
    int k = n - 1;
    for( ; i >= 0 && num[i] >= num[i+1] ; i--);
    if(i < 0){
        reverse(num.begin(), num.end());
        return;
    }
    for( ; num[k] <= num[i] ; k--);
    swap(num[i], num[k]);
    reverse(num.begin() + i + 1, num.end());
}
int main() {
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    nextPermutation(v);
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++) {
        cout << *it << " ";
    }
}

