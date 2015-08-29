#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    int carry = 0, tmpcarry;
    vector<int>::iterator it = digits.end() - 1;
    carry = (*it + 1) / 10;
    *it = (*it + 1) % 10;
    for(it = digits.end() - 2 ; it != digits.begin() - 1 && carry; it--) {
        tmpcarry = carry;
        carry = (*it + tmpcarry) / 10;
        *it  = (*it + tmpcarry) % 10;
    }
    if(carry)
        digits.insert(digits.begin(), 1);
    int count = 0;
    for(it = digits.begin() ; it != digits.end(); it++) {
        if(*it != 0)
            break;
        count++;
    }
    digits.erase(digits.begin(), digits.begin() + count);
    return digits;
}

int main() {
    vector<int> v;
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(9);
    v.push_back(9);
    v.push_back(9);
    v.push_back(9);
    v = plusOne(v);
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++)
        cout << *it << " ";
    return 0;
}
