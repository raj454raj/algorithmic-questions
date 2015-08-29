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
    string s;
    cin >> s;
    string sub = "AB";
    vector<size_t> positions1 = positions(s, sub);
    sub = "BA";
    vector<size_t> positions2 = positions(s, sub);
    int s1 = positions1.size(), s2 = positions2.size();
    if(s1 == 0 || s2 == 0)
        cout << "NO\n";
    else {
        if(positions1[0] < positions2[s2 - 1] && positions1[0] + 1 != positions2[s2 - 1])
            cout << "YES\n";
        else if(positions2[0] < positions1[s1 - 1] && positions2[0] + 1 != positions1[s1 - 1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
