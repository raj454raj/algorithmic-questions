#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b) {
    ostringstream oss1, oss2;
    oss1<< a;
    oss2<< b;
    string s1 = oss1.str(), s2 = oss2.str();
    string XY = s1.append(s2);
    string YX = s2.append(s1);
    return XY.compare(YX) > 0 ? 1: 0;
}

int main() {
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(0);
    sort(arr.begin(), arr.end(), compare); 
    ostringstream os;
    for(vector<int>::iterator it = arr.begin() ; it != arr.end() ; it++) {
        os << *it;
    }
    string s = os.str();
    s.erase(0, s.find_first_not_of('0'));
    if(s == "")
        s = "0";
    cout << s;
    return 0;
}
