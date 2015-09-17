#include<bits/stdc++.h>
//#define g getchar_unlocked
#define ll long long int
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/

vector<int>::iterator mylower(vector<int>& v, int x) {
    vector<int>::iterator it = lower_bound(v.begin(), v.end(), x);
    if(*it == x)
        return it;
    else if(it != v.begin()) {
        return (it - 1);
    }
    return v.begin();
}

bool searchMatrix(vector< vector<int> >& matrix, int target) {
    if(matrix.size() == 0)
        return false;
    if(matrix[0][0] > target)
        return false;
    vector<int>::iterator it;
    vector<int> v(matrix.size());
    for(int i = 0 ; i < matrix.size() ; i++) {
        v[i] = matrix[i][0];
    }
    it = mylower(v, target);
    if(*it == target)
        return true;
    int ind = it - v.begin();
    if(binary_search(matrix[ind].begin(), matrix[ind].end(), target))
        return true;
    return false;
}

int main() {
    int n;
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

    for(int i = 0 ; i < 3 ; ++i) {
        for(int j = 0 ; j < 4 ; ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cin >> n;
    cout << searchMatrix(v, n);
    /*
    int arr[] = {1,4,9,16,25,36,49,64,81,100};
    vector<int> t(arr, arr+10);
    cin >> n;
    cout << mylower(t, n);
    */
    return 0;
}

