#include<bits/stdc++.h>
#define ll long long int
//#define g getchar_unlocked
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/

vector<string> res;
unordered_map<string, set<string> > m;
map<pair<string, string>, bool> check;

void recurse(string start) {
    res.push_back(start);
    unordered_map<string, set<string> >::iterator it;
    it = m.find(start);
    if(it != m.end()) {
        set<string>::iterator tmp;
        pair<string, string> p;
        for(tmp = m[start].begin() ; tmp != m[start].end() ; ++tmp) {
            p = make_pair(start, *tmp);
            if(check[p] == false) {
                check[p] = true;
                recurse(*tmp);
            }
        }
    }
}

vector<string> findItinerary(vector<pair<string, string> > tickets) {
    for(int i = 0 ; i < tickets.size() ; ++i) {
        m[tickets[i].first].push(tickets[i].second);
        check.insert(make_pair(tickets[i], false));
    }
    recurse("JFK");
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<string, string> > tmp;
    tmp.push_back(make_pair("JFK","SFO"));
    tmp.push_back(make_pair("JFK","ATL"));
    tmp.push_back(make_pair("SFO","ATL"));
    tmp.push_back(make_pair("ATL","JFK"));
    tmp.push_back(make_pair("ATL","SFO"));
    vector<string> v = findItinerary(tmp);
    for(int  i = 0 ; i < v.size() ; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}

