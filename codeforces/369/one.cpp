#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    string s;
    vector<string> v;
    cin >> n;
    int flag = 0;
    int pos;
    for(int i = 0 ; i < n ; ++i) {
        cin >> s;
        if(!flag && s.find("OO") != string::npos) {
            flag = 1;
            pos = i;
        }
        v.push_back(s);
    }

    string::iterator it;
    if(!flag)
        cout << "NO";
    else {
        cout << "YES\n";
        v[pos].replace(v[pos].find("OO"), 2, "++");
        for(int i = 0 ; i < n ; ++i)
            cout << v[i] << endl;
    }
    return 0;
}

