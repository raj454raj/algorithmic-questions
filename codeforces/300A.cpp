#include<bits/stdc++.h>
using namespace std;
vector<size_t> positions(string s, string sub) {
    vector<size_t> positions;

    size_t pos = s.find(sub, 0);
    while(pos != string::npos)
    {
        positions.push_back(pos);
        pos = s.find(sub, pos+1);
    }
    return positions;
}
void printVector(vector<size_t> p) {
        for(int i = 0 ; i < p.size() ; ++i)
                    cout << p[i] << " ";
            cout << endl;
}

int main() {
    vector<size_t> c,o,d,e,f,r,s;
    string str;
    cin>>str;
    c = positions(str, "C");
    o = positions(str, "O");
    d = positions(str, "D");
    e = positions(str, "E");
    f = positions(str, "F");
    r = positions(str, "R");
    s = positions(str, "S");
    if(c.size() < 2 || o.size() < 1 || d.size() < 1 || e.size() < 2 || f.size() < 1 || r.size() < 1 || s.size() < 1)
        cout << "NO\n";
    else {
        int n = str.size(), i, j, k;
        string sub;
        string tmp;
        int flag = 0;
        for(i = 0 ; i < n ; ++i) {
            for(j = 1 ; j <= n - i ; j++) {
                tmp = str;
                sub = str.substr(i, j);
                tmp.erase(i, j);
                if(tmp == "CODEFORCES") {
                    flag = 1;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
