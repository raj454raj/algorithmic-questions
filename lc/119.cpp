#include<bits/stdc++.h>
using namespace std;
vector<int> getRow(int rowIndex) {
    vector<int> res;
    int i;
    long long int tmp;
    res.push_back(1);
    if(rowIndex == 0)
        return res;
    for(i = 1 ; i < rowIndex ; i++) {
        tmp = res[i - 1] * (long long int)(rowIndex - i + 1);
        res.push_back(tmp / i); 
    }
    res.push_back(1);
    return res;
}
int main() {
    int n;
    vector<int> v;
    v = getRow(30);
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++) {
        cout << *it << " ";
    }
    return 0;
}
