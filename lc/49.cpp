#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool comp(pair<string, int> a, pair<string, int> b) {
    return a.first < b.first;
}
vector<vector<string> > groupAnagramsold(vector<string>& strs) {
    vector< vector<string> > res;
    if(strs.size() < 1)
        return res;
    vector< pair<string, int> > s;
    for(int i = 0 ; i < strs.size() ; ++i) {
        s.push_back(make_pair(strs[i], i));
        sort(s[i].first.begin(), s[i].first.end());
    }
    sort(s.begin(), s.end(), comp);
    string prev = s[0].first;
    vector<string> tmp;
    tmp.push_back(strs[s[0].second]);
    for(int i = 1 ; i < s.size() ; ++i) {
        if(s[i].first == prev) {
            tmp.push_back(strs[s[i].second]);
        }
        else {
            res.push_back(tmp);
            prev = s[i].first;
            tmp.clear();
            tmp.push_back(prev);
        }
    }
    res.push_back(tmp);
    return res;
}

vector<vector<string> > groupAnagrams(vector<string>& strs) {

    map<string, int> m;

    vector<vector<string> > v;

    string tmp;

    map<string, int>::iterator it;

    int index = 0;

    vector<string> t;

    for(int i = 0 ; i < strs.size() ; ++i) {

        tmp = strs[i];

        sort(tmp.begin(), tmp.end());

        it = m.find(tmp);

        if(it != m.end()) {

            v[m[tmp]].push_back(strs[i]);

        }

        else {

            m[tmp] = index++;

            t.push_back(strs[i]);

            v.push_back(t);

            t.clear();

        }

    }

return v;



}
int main() {
    vector<string> t;
    t.push_back("asd");
    t.push_back("dads");
    t.push_back("das");
    t.push_back("ssasa");
    t.push_back("asass");
    vector<vector<string> > v = groupAnagrams(t);
    for(int i = 0 ; i < v.size() ; ++i) {
        for(int j = 0 ; j < v[i].size() ; ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

