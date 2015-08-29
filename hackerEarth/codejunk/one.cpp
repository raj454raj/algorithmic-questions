#include<bits/stdc++.h>
using namespace std;

bool comp(pair<string, pair<int, int> > a, pair<string, pair<int, int> > b) {
    if(a.second.second == b.second.second) {
        return a.second.first < b.second.first;
    }
    return a.second.second > b.second.second;
}

int main() {
    int n, tmp;
    cin >> n;
    string s;
    map< string, pair< int, int > > m;
    map< string, pair< int, int > >::iterator it;
   
    for(int i = 0 ; i < n ; i++) {
        cin >> s;
        it = m.find(s);
        if(it != m.end()) {
            tmp = it->second.second;
            it->second.second = tmp + 1;
        }
        else {
            m.insert(make_pair(s, make_pair(i + 1, 1))); 
        }
    }
    vector< pair<string, pair<int, int> > > v;
    for(it = m.begin() ; it != m.end() ; it++) {
        v.push_back(make_pair(it->first, make_pair(it->second.first, it->second.second)));
    }
    sort(v.begin(), v.end(), comp);
    for(int i = 0 ; i < v.size() ; i++) {
        cout << v[i].first << " " << v[i].second.second << endl;
    }
    return 0;
}
