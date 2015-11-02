#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    string s;
    cin >> s;
    ll count = 0;
    string::iterator start = s.begin();
    string::iterator end = s.end() - 1, tmp;
    while(start != end) {
        if(*end == '1') {
            tmp = end;
            while(*tmp == '1' && tmp != start) {
                *tmp = '0';
                tmp--;
            }
            if(tmp == start) {
                int tmpind = end - s.begin();
                *start = 0;
                s = "1" + s;
                start = s.begin();
                end = s.begin() + tmpind + 1;
            }
            else {
                *tmp = '1';
            }
            count++;
        }
        else {
            end--;
            count++;
        }
    }
    cout << count;
    return 0;
}

