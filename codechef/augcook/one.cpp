#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}
int main() {
    int t;
    scanf("%d", &t);
    char s1[20], s2[20];
    int flag;
    while(t--) {
        int a[26] = {0};
        int b[26] = {0};
        scanf("%s", s1);
        scanf("%s", s2);
        flag = 0;
        for(int i = 0 ; s1[i] ; ++i) {
            if(s1[i] == s2[i])
                continue;
            else if(s1[i] == '?'|| s2[i] == '?')
                continue;
            else { 
                flag = 1;
                break;
            }
        }

        if(flag)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}

