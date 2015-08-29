#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > generate(int numRows) {
    vector< vector<int> > res;
    if(numRows == 0)
        return res;
    vector<int> row;
    row.push_back(1);
    res.push_back(row);
    if(numRows == 1)
        return res;
    row.push_back(1);
    res.push_back(row);
    if(numRows == 2)
        return res;
    else {
        vector<int> row;
        for(int i = 2 ; i < numRows ; i++) {
            row.clear();
            row.push_back(1);
            for(int j = 1 ; j < i ; j++) {
                row.push_back(res[i - 1][j] + res[i - 1][j - 1]);
            }
            row.push_back(1);
            res.push_back(row);
        }
        return res;
    }


}
int main() {
    int n;
    vector< vector<int> > v;
    /*vector<int> a;
    a.push_back(1);
    v.push_back(a);
    a.push_back(1);
    v.push_back(a);
    a.clear();
    a.push_back(1);
    a.push_back(2);
    a.push_back(1);
    v.push_back(a);
    */
    int it;
    for(it = 0 ; it < 10 ;it++) {
    v = generate(it);
    for ( vector< vector<int> >::size_type i = 0; i < v.size() ; i++ )
    {
        for ( vector<int>::size_type j = 0; j < v[i].size(); j++ )
        {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
        cout << "********************************************************\n\n\n";
    }
    return 0;
}
