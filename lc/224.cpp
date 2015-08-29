#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int calculate(string str) {
    stack<char> s;
    char c;
    int sum = 0;
    for(int i = 0 ; i < str[i] ; i++) {
        if(str[i] == '+' || str[i] == '-')
            s.push(str[i]);
        else if(str[i] >= '0' && str[i] <= '9') {
            if(s.empty()) {
                s.push(str[i]);
            }
            else {
                if(s.top() == '+') {
                    s.pop();
                    c = s.top();
                    
                }
                else if(s.top() == '-') {
                
                }
            }
        }
            
    }
}

int main() {
    string s("sadl asldjsmj d   sajdasd d");
    calculate(s);
    return 0;
}
