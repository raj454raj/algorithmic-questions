#include<bits/stdc++.h>
using namespace std;

int toInt(string s) {
    int val;
    istringstream ss(s);
    ss >> val;
    return val;
}

string toString(int v) {
    ostringstream ss;
    ss << v;
    return ss.str();
}
int evalRPN(vector<string>& tokens) {
    char c;
    string x, y, op;
    int X, Y;
    stack<string> S;
    int res;
    for(vector<string>::iterator it = tokens.begin() ; it != tokens.end() ; it++) {
        c = (char)((*it)[0]);
        if(*it == "+" || *it == "-" || *it == "*" || *it == "/") {
            op = *it;
            y = S.top(); S.pop();
            x = S.top(); S.pop();
            X = toInt(x);
            Y = toInt(y);
            switch(op[0]) {
                case '+': {
                              res = X + Y;
                              break;
                          }
                case '-': {
                              res = X - Y;
                              break;
                          }
                case '*': {
                              res = X * Y;
                              break;
                          }
                case '/': {
                              res = X / Y;
                              break;
                          }
                default: continue;
            }
            S.push(toString(res));
        }
        else
            S.push(*it);
    }
    return toInt(S.top());
}

int main() {
    const char *arr[] = {"-78","-33","196","+","-19","-","115","+","-","-99","/","-18","8","*","-86","-","-","16","/","26","-14","-","-","47","-","101","-","163","*","143","-","0","-","171","+","120","*","-60","+","156","/","173","/","-24","11","+","21","/","*","44","*","180","70","-40","-","*","86","132","-84","+","*","-","38","/","/","21","28","/","+","83","/","-31","156","-","+","28","/","95","-","120","+","8","*","90","-","-94","*","-73","/","-62","/","93","*","196","-","-59","+","187","-","143","/","-79","-89","+","-"};
    vector<string> s;
    s.assign(arr, arr + sizeof(arr)/sizeof(arr[0]));
/*    s.push_back("3");
    s.push_back("-4");
    s.push_back("+");*/
    cout << evalRPN(s);
    return 0;
}
