#include<bits/stdc++.h>
using namespace std;
bool binSearch(vector<int> a, int x) {
    int mid, beg = 0, last = a.size() - 1;
    while(beg <= last) {
        mid = last + (beg - last) / 2;
        if(a[mid] == x) {
            return true;
        }
        else if(a[mid] < x)
            beg = mid + 1;
        else
            last = mid - 1;
    }
    return false;
}
bool searchMatrix(vector< vector<int> >& matrix, int target) {

    vector<int> v;
    vector< vector<int> >::iterator i;
    vector<int>::iterator j;
    for(i = matrix.begin() ; i != matrix.end() ; i++) {
        for(j = i->begin() ; j != i->end() ; j++)
            v.push_back(*j);
    }
    return binSearch(v, target);
}
int main() {
    vector< vector<int> > v;
    vector<int> tmp;
    tmp.push_back(1);
    tmp.push_back(3);
    tmp.push_back(4);
    tmp.push_back(7);
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back(10);
    tmp.push_back(11);
    tmp.push_back(16);
    tmp.push_back(20);
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back(23);
    tmp.push_back(30);
    tmp.push_back(34);
    tmp.push_back(50);
    v.push_back(tmp);
    cout << searchMatrix(v, 50);
    return 0;
}
