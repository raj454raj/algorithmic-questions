#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, t;
    scanf("%d", &t);
    getchar();
    char str[500];
    int win, lose;
    while(t--) {
        win = 0;
        lose = 0;
        scanf("%s", str);
        for(i = 0 ; str[i] ; i++) {
            if(str[i] == '0')
                lose++;
            else
                win++;
        }
        if(win > lose && win >= 11)
            cout << "WIN\n";
        else if(lose >= 11)
            cout << "LOSE\n";
    }
    return 0;
}
