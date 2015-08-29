#include<bits/stdc++.h>
using namespace std;

string appendSpaces(int l) {
    string s;
    for(int i = 0 ; i < l ; i++)
        s += " ";
    return s;
}
vector<string> fullJustify(vector<string>& words, int maxWidth) {
    int sz = words.size();
    int L = maxWidth, even, curr, left;
    int currline = 0, spaces, gaps, wordcount = 0;
    vector<string> tmp, lines;
    string str;
    int i, j = 0;
    for(i = 0 ; i < sz ; i++) {
        if(currline + words[i].size() < L - wordcount + 1) {
            currline += words[i].size();
            wordcount++;
            tmp.push_back(words[i]);
        }
        else {
            spaces = L - currline;
            gaps = wordcount - 1;
            str = "";
            if(gaps == 0) {
                str += words[i-1];
                str += appendSpaces(L - words[i-1].size());
            }
            else {
                even = spaces / gaps;
                left = spaces % gaps;
                for(j = 0 ; j < wordcount - 1 ; j++) {
                    str += tmp[j];
                    curr = 0;
                    if(j < left) {
                        curr++;
                        spaces--;
                    }
                    curr += even;
                    spaces -= even;
                    str += appendSpaces(curr);
                }
                str += tmp[j];
            }
            lines.push_back(str);
            tmp.clear();
            tmp.push_back(words[i]);
            currline = words[i].size();
            wordcount = 1;
        }
    }
    if(wordcount > 0) {
        gaps = wordcount - 1;
        str = "";
        if(gaps == 0) {
            str += words[i - 1];
            str += appendSpaces(L - words[i - 1].size());
        }
        else {
            spaces = L - currline;
            even = spaces / gaps;
            left = spaces % gaps;
            for(j = 0 ; j < wordcount - 1 ; j++) {
                str += tmp[j];
                str += " ";
                spaces--;
                /*
                curr = 0;
                if(j < left) {
                    curr++;
                    spaces--;
                }
                curr += even;
                spaces -= even;
                str += appendSpaces(curr);*/
            }
            str += tmp[j];
            str += appendSpaces(spaces);
        }
        lines.push_back(str);
    }
    return lines;
}

int main() {
    vector<string> s;
    s.push_back("Here");
    s.push_back("is");
    s.push_back("an");
    s.push_back("example");
    s.push_back("of");
    s.push_back("text");
    s.push_back("justification.");
    vector<string> res = fullJustify(s, 14);
    for(int i = 0 ; i < res.size() ; i++) {
        cout << "*" <<res[i] << "*" << endl;
    }
    return 0;
}
