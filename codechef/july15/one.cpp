#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    string s, tmp;
    vector<string> str;
    getchar();
    while(t--) {
        getline(cin, s);
        for(int i = 0 ; s[i] ; i++) {
            if(s[i] != ' ')
                tmp.push_back(s[i]);
            else {
                str.push_back(tmp);
                tmp.clear();
            }
        }
        str.push_back(tmp);
        tmp.clear();
        if(str[0] == str[2] && str[2] == str[4]) {
            printf("YES\n");    
        }
        else if(str[1] == str[2] && str[2] == str[4]) {
            printf("YES\n");    
        }
        else if(str[1] == str[3] && str[3] == str[4]) {
            printf("YES\n");    
        }
        else if(str[0] == str[3] && str[3] == str[4]) {
            printf("YES\n");    
        }
        else if(str[0] == str[2] && str[2] == str[5]) {
            printf("YES\n");    
        }
        else if(str[1] == str[2] && str[2] == str[5]) {
            printf("YES\n");    
        }
        else if(str[1] == str[3] && str[3] == str[5]) {
            printf("YES\n");    
        }
        else if(str[0] == str[3] && str[3] == str[5]) {
            printf("YES\n");    
        }
        else {
            printf("NO\n");
        }
        str.clear();
    }
    return 0;
}
