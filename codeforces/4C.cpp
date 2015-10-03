#include<bits/stdc++.h>
#define ll long long int
using namespace std;
map<string, int> m;
int main() {
    int t;
    string s;
    scanf("%d", &t);
    while(t--) {
        cin >> s;
        if(m[s] == 0) {
            printf("OK\n");
            m[s] = 1;
        }
        else {
            cout << s << m[s] << endl;
            m[s]++;
        }
    }
    return 0;
}

