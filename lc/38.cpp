#include<bits/stdc++.h>
using namespace std;
string countAndSay(int n) {
    vector<string> s;
    s.push_back("1");
    if(n == 1) {
        return s[0];
    }
    s.push_back("11");
    if(n == 2) {
        return s[1];
    }
    else {
        n -= 1;
        char prev;
        int tmpcount;
        ostringstream os;
        string::iterator it;
        for(int i = 1 ; i <= n ; i++) {
            it = s[i].begin();
            prev = *it;
            tmpcount = 1;
            os.str("");
            for(it = s[i].begin() + 1 ; it != s[i].end() ; it++) {
                if(*it == prev) {
                    tmpcount++;
                }
                else {
                    os << tmpcount;
                    os << prev;
                    prev = *it;
                    tmpcount = 1;
                }
            }
            os << tmpcount;
            os << prev;
            s.push_back(os.str());
        }
        return s[n];
    }

}

int main() {
    int n;
    cin >> n;
    cout << countAndSay(n);
    return 0;
}
