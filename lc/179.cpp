#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b) {
    ostringstream os1, os2;
    os1 << a;
    os2 << b;
    string s1 = os1.str(); 
    string s2 = os2.str();
    return s1 + s2 > s2 + s1;
}
int main() {
    vector<int> v;
    v.push_back(4);
    v.push_back(5);
    sort(v.begin(), v.end(), compare);
    ostringstream is;
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++) {
        is << *it;
    }
    string s = is.str();
    s.erase(0, s.find_first_not_of('0'));
    if(s == "")
        s = "0";
    cout << s;
    return 0;
}
