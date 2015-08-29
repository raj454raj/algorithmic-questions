#include<bits/stdc++.h>
#define ll long long int
using namespace std;

map<int, int, greater<int> > m1;
map<int, int> m2;

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}
int main() {
    int n, s, d, p;
    char ch, c;
    scanf("%d%d", &n, &s);
    c = getchar();
    for(int i = 0 ; i <  n ; i++) {
        scanf("%c %d%d", &ch, &d, &p);
        getchar();
        if(ch == 'B') {
            m1[d] += p;
        }
        else {
            m2[d] += p;
        }
    }
    map<int, int, greater<int> >::iterator it;
    int count = 0;
    vector<pair<int, int> > tmp;
    for(it = m2.begin() ; it != m2.end() ; ++it) {
        if(count == s)
            break;
        count++;
        tmp.push_back(make_pair(it->first, it->second));
    }
    count = 0;
    for(int i = tmp.size() - 1 ; i >= 0 ; i--) {
        printf("S %d %d\n", tmp[i].first, tmp[i].second);
    } 
    count = 0;
    for(it = m1.begin() ; it != m1.end() ; ++it) {
        if(count == s)
            break;
        count++;
        printf("B %d %d\n", it->first, it->second);
    }
    return 0;
}

