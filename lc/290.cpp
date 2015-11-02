#include<bits/stdc++.h>
//#define g getchar_unlocked
#define ll long long int
using namespace std;
/*int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}*/
bool wordPattern(string pattern, string str) {
    vector<string> v(26, "");
    string tmpstring = "";
    int index = 0;
    map<string, int> m;
    for(int i = 0 ; i < str.size() ; ++i) {
        if(str[i] != ' ')
            tmpstring += str[i];
        else {
            if(index >= pattern.size())
                return false;
            if(pattern[index] == ' ')
                index++;
            if(v[pattern[index] - 'a'] == "") {
                v[pattern[index] - 'a'] = tmpstring;
                if(m[tmpstring] != 0)
                    return false;
                else
                    m[tmpstring] = pattern[index] - 'a' + 1;
            }
            else {
                if(v[pattern[index] - 'a'] != tmpstring)
                    return false;
            }
            tmpstring = "";
            index++;
        }
    }
    if(index >= pattern.size())
        return false;
    if(pattern[index] == ' ')
        index++;
    if(v[pattern[index] - 'a'] == "") {
        v[pattern[index] - 'a'] = tmpstring;
        if(m[tmpstring] != 0)
            return false;
        else
            m[tmpstring] = pattern[index] - 'a' + 1;
    }
    else {
        if(v[pattern[index] - 'a'] != tmpstring)
            return false;
    }

    if(index + 1 != pattern.size())
        return false;
    return true;
}
bool wordPattern1(string pattern, string str) {
    if (pattern.empty() && str.empty()) return true;
    if (pattern.empty() || str.empty()) return false;

    map<char, string> p2s;
    map<string, char> s2p;
    int j = 0;
    for (int i=0; i<pattern.size(); ++i) {
        if (j == str.size()) return false;
        char ch = pattern[i];

        int pos = str.find_first_of(" ", j);
        if (pos == string::npos) {
            pos = str.size();
        }
        string word = str.substr(j, pos-j);

        j = pos == str.size()? pos : pos + 1;

        if (p2s.count(ch) == 0 && s2p.count(word) == 0) {
            p2s[ch] = word;
            s2p[word] = ch;
        } else if (p2s[ch] != word || s2p[word] != ch) {
            return false;
        }
    }

    return j == str.size();
}
int main() {
    int n;
    string pattern = "h u f";
    string str = "unit test hedsl";
    cout << wordPattern1(pattern, str);
    return 0;
}

