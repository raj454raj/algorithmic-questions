#include<bits/stdc++.h>
using namespace std;
void reverseWords(string &s) {
    string::iterator it;
    string tmp;
    vector<string> str;
    s.erase(0, s.find_first_not_of(' '));
    for(it = s.begin() ; it != s.end() ; it++) {
        if(*it != ' ') {
            tmp.push_back(*it);
        }
        else {
            str.push_back(tmp);
            tmp.clear();
        }
    }
    tmp.erase(0, tmp.find_first_not_of(' '));
    if(tmp != "")
        str.push_back(tmp);
    reverse(str.begin(), str.end());
    tmp = "";
    string ttmp;
    for(vector<string>::iterator i = str.begin() ; i != str.end() ; i++) {
        if((i + 1) != str.end()) {
            ttmp = *i;
            ttmp.erase(0, ttmp.find_first_not_of(' '));
            tmp += ttmp + " ";
        }
        else {
            ttmp = *i;
            ttmp.erase(0, ttmp.find_first_not_of(' '));
            if(ttmp == "")
                ttmp = " "; 
            tmp += ttmp;
        }
    }
    s = tmp;
    s.erase(0, s.find_first_not_of(' '));
}

int main() {
    string s = "  t he   sky is blue        ";
    reverseWords(s);
    cout << s;
    return 0;
}
