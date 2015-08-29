#include<bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s) {
    int count = 0, prevcount = 0;
    for(string::iterator i = s.begin() ; i != s.end() ; i++) {
        if(*i != ' ') {
            count++;
        }
        else {
            if(count != 0)
                prevcount = count;
            count = 0;
        }
    }
    if(count == 0 && prevcount != 0)
        return prevcount;
    return count;
}

int main() {
    string s = "aasd sd a     sdasd sd         ";
    cout << lengthOfLastWord(s);
    return 0;
}
