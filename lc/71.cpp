#include<bits/stdc++.h>
using namespace std;
vector<string> &split(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}


int main() {
    string s;
    cin >> s;
    vector<string> fin;
    vector<string>::iterator it;
    split(s, '/', fin);
    stack<string> S;
    for(it = fin.begin() ; it != fin.end() ; ++it) {
        if(*it == "." || *it == "")
            continue;
        if(*it == "..") {
            if(!S.empty())
                S.pop();
        }
        else
            S.push(*it);
    }
    string f = "/";
    stack<string> n;
    while(!S.empty()) {
        n.push(S.top());
        S.pop();
    }
    while(!n.empty()) {
        f += n.top();
        n.pop();
        if(!n.empty())
            f += "/";
    }
    cout << f << endl;
    return 0;
}
